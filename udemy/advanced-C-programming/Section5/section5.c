#include <stdio.h>

int sum(int a){
    //find sum a number;
    static int x =0;
    x+=a;

    return x;
}

int main(){

    printf("%d\n", sum(15));
    printf("%d\n", sum(25));
    printf("%d\n", sum(30));

    return 0;
}