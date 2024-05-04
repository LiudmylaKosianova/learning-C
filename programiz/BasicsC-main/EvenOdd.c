#include<stdio.h>
//takes integer input, prints whether it's even or odd

int main(){
    int number;
    scanf("%d", &number);
    if((number%2) == 0){
        printf("Even");
    }else{
        printf("Odd");
    }

    return 0;
}