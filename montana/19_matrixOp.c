#include <stdio.h>

int main(void){

    int A[2][2] = {{1,5}, {7,3}};
    int B[2][2] = {{12,-1}, {0,9}};
    int C[2][2];

    /*add matrices*/

    for(int i = 0; i<2; i++){
        for(int j = 0; j<2; j++){
            C[i][j] = A[i][j] + B[i][j];
        }
    }
    /*print*/

    printf("\n");
    for(int i =0; i<2; i++){
        for(int j =0; j<2; j++){
            printf("%d\t", A[i][j]);
        }
        printf("\n");
    }
    printf("    +\n");
    for(int i =0; i<2; i++){
        for(int j =0; j<2; j++){
            printf("%d\t", B[i][j]);
        }
        printf("\n");
    }
    printf("    =\n");
    for(int i =0; i<2; i++){
        for(int j =0; j<2; j++){
            printf("%d\t", C[i][j]);
        }
        printf("\n");
    }



    return 0;
}