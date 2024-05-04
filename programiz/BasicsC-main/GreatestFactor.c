#include<stdio.h>
//finds the greatest factor with for loop

int maind(){
    int number;
    scanf("%d", &number);

    for(int i=number-1; i>=1; i--){
        if(number%i == 0){
            printf("%d", i);
            break;
        }
    }

    return 0;
}