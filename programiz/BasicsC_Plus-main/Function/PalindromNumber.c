#include<stdio.h>
//checks if an input number is a palindrom (1001 or 575)

int findReverse(int);
int main(){
    int number;
    scanf("%d", &number);
    if(findReverse(number) == number){
        printf("Its a Palindrome");
    }else{
        printf("Not a Palindrome");
    }

    return 0;
}

int findReverse(int a){
    int reversed = 0;
    int digit;

    while (a != 0){
        digit = a%10;
        reversed = reversed*10 + digit;
        a = a/10;
    }
    return reversed;

}