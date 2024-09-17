/* Example code demonstrating how to use a random number generator in C. */

/* 
   stdbool.h: Needed for bool type 
   stdlib.h:  Needed for random number generator 
   time.h:    Needed to seed random number generator (try putting 0 instead of 
              time(NULL) and running your program a few times!) 
   stdio.h:   Needed for printf
*/
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int main(void) {
    
    /* Seeds the random number generator */
    srand(time(NULL)); 

    /* Generate a random number */
    int r = rand();

    printf("r: %d\n\n", r);

    return 0;
}