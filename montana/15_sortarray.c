#include <stdio.h>

//selection sort

int main(void){

    int E[5] = {1,7,-2,5,6};
    int j, k;
    int minTemp;

    printf("Array is {%d, %d, %d, %d, %d}\n", E[0], E[1], E[2], E[3], E[4]);

    for(j=0; j<5; j++){
        printf("\tlet's focus on array element [%d]\n", j);
        minTemp = E[j];
        for(k=j+1; k<5; k++){
            printf("\tcomparing %d to %d\n", E[k], minTemp);
            if(E[k] < minTemp){
                printf("\tnew min found! swapping...\n");
                minTemp = E[k];
                E[k] = E[j];
                E[j] = minTemp;
            }
        }
        printf("Array is now {%d, %d, %d, %d, %d}\n", E[0], E[1], E[2], E[3], E[4]);

    }

    //printf("Array is {%d, %d, %d, %d, %d}\n", E[0], E[1], E[2], E[3], E[4]);


    return 0;
}