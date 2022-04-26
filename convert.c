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

#define YES 1
#define NO  0


int main(int argc, char *argv[]){
    int c, fist_print = YES;
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
    while ((c = getchar()) != EOF){
        /* 1st condition */
        if (c >= LOWER_BOUND && c <= SECOND_BOUND){
            c = FIRST_ENCODE_NUM - c;
        /* 2nd condtion */
        }else if (c >= THIRD_BOUND && c<= UPPER_BOUND){
            c -= SECONDE_ENCODE_NUM;
        /* new line character, remains unchanged */
        }else if (c == '\n'){
            /* do nothing */
        }else{
            /* exit the program */
            return 0;
        }

        /* 下面的else部分只会运行一次，且只在第一次运行。
            因为开始我们将fist_print设为了YES，第一次运行时if部分的条件不满足。
            会直接进入else部分，然后会将fist_print设为NO。

            那么下次运行的时候会进入if部分，first_print就是等于NO了
            因为满足了if的条件，将会print一个空格。

            所以在第一次时，我们将不会print空格只会print一个数字。
            在第一次之后将会print一个空格，再紧接着print一个数字。

            e.g. 5 25 26 36 -1 26 36 -1 18 -1 37 22 36 37 -15 -15 -15
            第一次只print一个"5"
                第二print" 25"
                    第三print " 26"
                        最后print " -15"
        */
        /* print a space after first integer */
        if (fist_print == NO){
            printf(" ");
        }else{
            /* first time the loop runs */
            fist_print = NO;
        }

        /* 无论上面是什么，下面的printf都会运行 */
        /* the encode int */
        printf("%d", c);
    }

    return 0;
}
