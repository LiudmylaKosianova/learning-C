#include<stdio.h>
//takes input integers and finds LCM
//LCM (Lowest Common Multiple) of two numbers, x and y is the smallest positive integer 
//that is perfectly divisible by both x and y.

int findLCM(int, int);
int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", findLCM(a, b));
    return 0;
}
int findLCM(int a, int b){
    int lcm;
    if(a > b){
        lcm = a;
    }else{
        lcm = b;
    }

    while(1){
        if(a%lcm == 0 && b%lcm == 0){
            break;
        }
        if(lcm == 2147483647){
            printf("lcm is larger than %d\n", lcm);
            break;
        }
        lcm++;
    }
    return lcm;
}