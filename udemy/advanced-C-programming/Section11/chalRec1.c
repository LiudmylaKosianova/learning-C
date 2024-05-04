#include <stdio.h>

int sumOfMany(int n);

int main(){

    printf("Sum of numbers in range 1 - 7 is %d\n", sumOfMany(7));

    return 0;
}

int sumOfMany(int n){

    int sum;
    if(n==1)return 1;
    else{
        sum = n + sumOfMany(n-1);
    }

    return sum;
}