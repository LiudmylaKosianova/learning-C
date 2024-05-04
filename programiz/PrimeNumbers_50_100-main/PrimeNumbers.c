#include<stdio.h>
// prints prime numbers from 50 to 100

int isPrime(int a);

int main(){

    for(int i = 50; i < 100; i++ ){
        if (isPrime(i)){
            printf("%d\n", i);
        }
    }
    

    return 0;
}

int isPrime(int a){
    for(int i = 2; i < a; i++){
        if(a % i == 0){
            return 0;
        }
    }    
    return 1;
}