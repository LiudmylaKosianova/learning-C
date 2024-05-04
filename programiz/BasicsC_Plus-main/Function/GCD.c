#include<stdio.h>
//takes input numbers
//finds the greatest common divisor

int findGCD(int,int);
int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", findGCD(a,b));
    return 0;
}
int findGCD(int a, int b){
    int gcd = 1;

    for(int i = 0; i <= a && i <= b; i++){
        if(a%i == 0 && b%i == 0){
            gcd = i;
        }
    }
    return gcd;
}