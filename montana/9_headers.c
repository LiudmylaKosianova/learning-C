#include <stdio.h>
#include <math.h>

int main(void){

    int A;
    int size;

    size = sizeof(A);

    printf("Size of A is: %d\n", size);

    double B = 3.14;
    double S;
    S = sqrt(B);

    printf("Square of B is %lf\n", S);
    return 0;
}