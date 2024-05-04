#include<stdio.h>

int main(){
    int number;
    scanf("%d", &number);

    int digit;
    int sum = 0;
    int num = number;
    
    while(num != 0){
        digit = num%10;
        sum += digit;
        num = num/10;
    }

    printf("%d", sum);
    return 0;
}