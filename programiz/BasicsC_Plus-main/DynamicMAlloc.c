#include <stdio.h>
#include <stdlib.h>

int main() {

    int n;
    int* marks;

    // get input value for n
    scanf("%d", &n);

    // allocate memory to store n values
    marks = (int*)malloc(n * sizeof(int));

    // get input value for marks
    for(int i = 0; i < n; i++){
        scanf("%d", marks+i);
    }

    // print values
    for (int i = 0; i < n; ++i) {
        printf("%d\n", *(marks + i));
    }

    return 0;
}