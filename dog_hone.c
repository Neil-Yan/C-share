#include <stdio.h>
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