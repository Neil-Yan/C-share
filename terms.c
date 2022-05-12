#include <stdio.h>
#include <stdlib.h>
#include <time.h>


#define ARITHMETIC_RANGE  15
#define STEP              15

#define GEOMETRIC_RANGE   10
#define RATIO_LOWER       2
#define RATIO_UPPER       10

#define TIME_LIMIT        60

#define GUESS_PROMPT "%d %d %d ...What is the next number?\n"

int guess_terms();


int main(int argc, char *argv[]){
    srand(time(NULL));

    // hard mode
    if (argc > 1){
        printf("Entering hard mode...\n");
        printf("How many sequences can you correctly guess in 1 minute?\n");
        time_t start_second = time(NULL), 
               second_used; 

        int success = 0; // # of success
        while ((second_used = time(NULL) - start_second) < TIME_LIMIT){
            // time left = 60 - time used
            printf("%ld seconds remaining\n", TIME_LIMIT - second_used);
           
            if (!guess_terms()){
                printf("You failed after %d attempts\n", success);
                break;
            }else{
                success++;
            }
        }
    // normal mode
    }else{
        guess_terms();
    }

    return 0;
}

int guess_terms(){
    int first_term, guess_term, user_guess;
    int num = rand(); 
    // 50% chance
    if(num % 2){
        first_term = rand() % ARITHMETIC_RANGE;
        int step = rand() % STEP;
        guess_term = first_term + 3*step;
        printf(GUESS_PROMPT, first_term, first_term + step, 
                             first_term + step + step);
    }else{
        first_term = rand() % GEOMETRIC_RANGE;
        /* Formula: (rand() % (upper - lower + 1)) + lower */
        int ratio = (rand() % (RATIO_UPPER - RATIO_LOWER + 1)) + RATIO_LOWER;
        guess_term = first_term*ratio*ratio*ratio;
	    printf(GUESS_PROMPT, first_term, first_term*ratio, 
                            first_term*ratio*ratio);
    }	    
    
    scanf("%d", &user_guess);

    if(user_guess == guess_term){
        printf("OK!\n");
        // make a correct guess
        return 1;
    }

    printf("no..\n");

    // wrong answer
    return 0;
}