#include <stdio.h>

int f_recursion(int n);

int main(){

    printf("%d\n", f_recursion(5));

    return 0;
}

int f_recursion(int n){
    int factorial;

    if(n == 0)return 1;
    else{
        factorial = n*f_recursion(n-1);
    }

    return factorial;
}