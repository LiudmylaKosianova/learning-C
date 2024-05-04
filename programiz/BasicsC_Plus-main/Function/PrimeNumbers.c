#include<stdio.h>
//takes two int as an input
//checks for prime numbers int this range

void isPrime(int);
int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    for(int i=a; i<=b; i++){
        isPrime(i);
    }
    return 0;
}

void isPrime(int a){
    int flag = 0;
    for(int i=2; i<a; i++){
        if(a%i == 0){
            flag = 1;
            break;
        }
    }
    if(flag == 0){
        printf("%d\n", a);
    }
}