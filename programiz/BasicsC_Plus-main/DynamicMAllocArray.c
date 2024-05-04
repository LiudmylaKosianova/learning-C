#include <stdio.h>
// import required library
#include <stdlib.h>

int main() {

    int* marks;

    // allocate space for marks
    marks = (int*) malloc (3 * sizeof(int));

    // get input value for marks
    for (int i = 0; i < 3; ++i) {
        scanf("%d", (marks + i));
    }

    // print array elements
    for (int i = 0; i < 3; ++i) {
        printf("%d\n", *(marks + i));
    }

    // resize the array to store 5 elements
    marks = realloc(marks, 5 * sizeof(int));

    // assign value for 4th and 5th element
    marks[3] = 13;
    marks[4] = 15;

    // print all element
    printf("\n");
    for (int i = 0; i < 5; ++i) {
        printf("%d\n", *(marks + i));
    }

    return 0;
}