#include <stdio.h>

/* range of bound */
#define LOWER_BOUND  32
#define SECOND_BOUND 79
#define THIRD_BOUND  80
#define UPPER_BOUND  126

/* encoding number */
#define FIRST_ENCODE_NUM   31
#define SECONDE_ENCODE_NUM 79

/* use decode mode if two arguments */
#define DECODE_MODE 2


int main(int argc, char *argv[]){
    int c, fist_print = 1;
    /* decode part, from int to char
        inverse operation */
    if (argc == DECODE_MODE){
        /* continues as it not reach the end */
        while (scanf("%d", &c) == 1){
            /* FIRST_ENCODE_NUM - LOWER_BOUND   = 31 - 32 = -1 */
            /* FIRST_ENCODE_NUM - SECONDE_BOUND = 31 - 79 = -48 */
            if (c >= FIRST_ENCODE_NUM - SECOND_BOUND &&
                c <= FIRST_ENCODE_NUM - LOWER_BOUND){
                c = FIRST_ENCODE_NUM - c;
            /* THIRD_BOUND - SECONDE_ENCODE_NUM = 80 - 79  = 1*/
            /* UPPER_BOUND - SECONDE_ENCODE_NUM = 126 - 79 = 47*/
            }else if (c >= THIRD_BOUND - SECONDE_ENCODE_NUM &&
                      c <= UPPER_BOUND - SECONDE_ENCODE_NUM){
                c += SECONDE_ENCODE_NUM;
            }
            /* the decode char */
            printf("%c", c);
        }
        return 0;
    }

    /* encode part, from char to int */
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
        /* print a space after first integer */
        if (!fist_print){
            printf(" ");
        }else{
            fist_print = 0;
        }
        /* the encode int */
        printf("%d", c);
    }

    return 0;
}
