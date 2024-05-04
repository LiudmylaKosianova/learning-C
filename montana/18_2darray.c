#include <stdio.h>

int main(void){

    double M[3][2];

    M[0][0] = 0.0;
    M[0][1] = 0.1;
    M[1][0] = 1.0;
    M[1][1] = 1.1;
    M[2][0] = 2.0;
    M[2][1] = 2.1;

    /*print array*/
    printf("M[0][0] = %.1lf \n", M[0][0]);
    printf("M[0][1] = %.1lf \n", M[0][1]);
    printf("M[1][0] = %.1lf \n", M[1][0]);
    printf("M[1][1] = %.1lf \n", M[1][1]);
    printf("M[2][0] = %.1lf \n", M[2][0]);
    printf("M[2][1] = %.1lf \n", M[2][1]);

    /*print 2D array with loop*/
    printf("Print with a loop \n");

    int i, j;
    for (i=0; i<3; i++){
        for(j=0; j<2; j++){
            printf("M[%d][%d] = %.1lf \n", i, j, M[i][j]);
        }
    }

    printf("------ \n");

    int N[2][3] = {{1,2,3}, {4,5,6}};
    for (i=0; i<2; i++){
        for(j=0; j<3; j++){
            printf("N[%d][%d] = %d \n", i, j, N[i][j]);
        }
    }

    /*print as a table*/
    for (i=0; i<2; i++){
        for(j=0; j<3; j++){
            printf("%d \t", N[i][j]);
        }
        printf("\n");
    }

    return 0;
}