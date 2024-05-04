#include<stdio.h>
//takes integer as an input and prints its factorial

int main (){
    int number;
    scanf("%d", &number);
    int factorial = 1;

    for(int i=0; i<=number; i++){
        factorial *= i;
    }
    return 0;
}