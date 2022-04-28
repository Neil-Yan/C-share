#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* Q: what is 'rand()' in <stdlib.h>?
    A:The rand() function returns a pseudo-random in‐
        teger in the  range  0  to  RAND_MAX  inclusive
        (i.e., the mathematical range [0, RAND_MAX]). */

/* Q: what is 'srand()' in <stdlib.h>?
    A: The  srand()  function sets its argument as the
       seed for a new sequence of pseudo-random  inte‐
       gers to be returned by rand().  These sequences
       are repeatable by calling srand() with the same
       seed value. */

/* Q: what is 'time(NULL)' in <time.h> ? 
    A: return the current time in second
*/

int get_distance(void);
int dog_home(void);


int main(int argc, char *argv[]){
    int home_count = 0;

    srand(time(NULL));
    for (int i=0; i<500; i++){
        home_count += dog_home();
    }
    printf("Dog arrived home %d times over 500 nights.\n", home_count);

    return 0;
}

/* return 1, if dog home.
    Ohterwise, return 0 */
int dog_home(void){
    int distance = get_distance();

    while ((distance += get_distance()) != 0){
        /* dog home */
        if (distance >= 10) return 1;
    }

    /* if distance is 0, means the dog come back to the lamppost */
    return 0;
}

int get_distance(void){
    
    /* dog steps forward to home */
    if (rand() % 2) return 2;

    /* dog steps backward */
    return -1;
}