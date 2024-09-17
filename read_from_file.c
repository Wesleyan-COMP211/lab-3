/* Example code demonstrating how to read from a file. */

#include <stdio.h>

int main(void) {

    FILE* f;
    int a;
    int b;

    f = fopen("input.txt","r");
    fscanf(f, "a: %d\n", &a) ;
    fscanf(f, "b: %d\n", &b) ;

    printf("a: %d\nb: %d\n\n", a, b);

    return 0;
}