#include <stdio.h>

int main(){

    int A[4];
    int v;

    A[0] = 22;
    A[1] = 109;
    A[2] = 101;
    A[3] = -8;

    printf("A[0] = %d \n", A[0]);
    printf("A[1] = %d \n", A[1]);
    printf("A[2] = %d \n", A[2]);
    printf("A[3] = %d \n", A[3]);

    printf("Printing with loop\n");

    for(int i = 0; i<4; i++){
        printf("A[%d] = %d \n", i, A[i]);
    }

    int B[7] = {7, 21, 78,-4};

    for(int i = 0; i<7; i++){
        printf("B[%d] = %d \n", i, B[i]);
    }

    int Bsize;
    printf("size of B is %ld\n", sizeof(B));
    
    printf("B[0] is %d\n", B[0]);
    printf("size of B[0] is %ld\n", sizeof(B[0]));
    Bsize = sizeof(B) / sizeof(B[0]);
    printf("size of B is %d\n", Bsize);
     

    float Sample[5];

    for(int i = 0; i < 5; i++){
        printf("Enter value #%d: \n", i+1);
        scanf(" %f", &Sample[i]);
    }

    printf("\tThank you. Your array:\n");
    for(int i = 0; i < 5; i++){
        printf(" Sample[%d] = %.2lf\n", i, Sample[i]);
    }








    return 0;
}