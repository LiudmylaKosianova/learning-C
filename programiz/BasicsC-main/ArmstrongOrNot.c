#include<stdio.h>
//checks if a number is an armstrong number
//(armstrong number = sum of cubes of every digit equals the number)

int main (){
    int number;
    scanf("%d", &number);
    int originalNumber = number;
    int sum, remainder = 0;

    while(originalNumber != 0){
        remainder = originalNumber%10;        
        sum += remainder*remainder*remainder;
        originalNumber = originalNumber/10;
    }
    if(sum == number){
        printf("An Armstrong number");
    }else{
        printf("Not an Armstrong");
    }
    return 0;
}