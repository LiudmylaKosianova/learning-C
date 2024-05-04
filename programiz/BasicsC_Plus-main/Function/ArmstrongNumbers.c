#include<stdio.h>
//takes two int between 100 and 999 as an input
//finds armstrong numbers between them
//armstrong number - sum of cubes of its digits equals to number
void checkArmstrong(int);
int main(){
    int a,b;
    scanf("%d %d", &a, &b);
    while(a<=b){
        checkArmstrong(a);
        a++;
    }

    return 0;
}
void checkArmstrong(int a){
    int originalN = a;
    int sum = 0;

    while(originalN != 0){
        int digit = originalN%10;
        sum += digit*digit*digit;
        originalN = originalN/10;
    }

    if(sum == a){
        printf("%d\n", a);
    }
}