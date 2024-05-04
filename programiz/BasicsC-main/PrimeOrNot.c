#include<stdio.h>
//checks if a number is prime or not

int main(){
    int number;
    scanf("%d", &number);

    int flag = 0;

    for(int i=2; i <= (number-1); i++){
        if(number%i == 0){
            flag = 1;
            break;
        }
    }
    if(flag == 1){
        printf("Not a prime number");
    }else{
        printf("Prime number");
    }
    return 0;
}