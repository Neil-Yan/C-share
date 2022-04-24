#include <stdio.h>

/* range of bound */
#define LOWER_BOUND  32
#define SECOND_BOUND 79
#define THIRD_BOUND  80
#define UPPER_BOUND  126

/* encoding number */
#define FIRST_ENCODE_NUM   31
#define SECONDE_ENCODE_NUM 79

#define DECODE_MODE 6

#define PRINT_CHR "%c"
#define PRINT_INT "%d"


void print_space(int *fist_print);


int main(int argc, char *argv[]){
    int c, fist_print = 1;

    if (argc == DECODE_MODE){
        while ((c = getchar()) != '\0'){
            if (c >= FIRST_ENCODE_NUM - SECOND_BOUND &&
                c <= FIRST_ENCODE_NUM - LOWER_BOUND){
                c = FIRST_ENCODE_NUM - c;
            }else if (c >= c - SECONDE_ENCODE_NUM &&
                      c <= c - UPPER_BOUND){
                c += SECONDE_ENCODE_NUM;
            }
            print_space(&fist_print);
            printf(PRINT_INT, c);
        }
        return 0;
    }

    /* loop continues, if c = '\n' or between the range */
    while ((c = getchar()) == '\n' ||
            (c >= LOWER_BOUND && c <= UPPER_BOUND)){
        /* 1st condition */
        if (c >= LOWER_BOUND && c <= SECOND_BOUND){
            c = FIRST_ENCODE_NUM - c;
        /* 2nd condtion */
        }else if (c >= THIRD_BOUND && c<= UPPER_BOUND){
            c -= SECONDE_ENCODE_NUM;
        }
        print_space(&fist_print);
        printf(PRINT_CHR, c);
    }

    return 0;
}

/* if it is not first print, print a space */
void print_space(int *fist_print){
    if (!*fist_print){
        printf(" ");
    }else{
        *fist_print = 0;
    }
}
