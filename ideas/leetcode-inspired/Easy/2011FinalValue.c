#include<stdio.h>
#include<string.h>
/*
There is a programming language with only four operations and one variable X:

++X and X++ increments the value of the variable X by 1.
--X and X-- decrements the value of the variable X by 1.
Initially, the value of X is 0.

Given an array of strings operations containing a list of operations, return the final value of X after performing all the operations.


*/
int finalValue(char**, int);
int main(){
    char* case1[3] = {"x++", "x--", "x--"};
    int x = finalValue(case1,3);
    printf("%d", x);
    
    return 0;
}
int finalValue(char** arr, int arrL){
    int x =0;
    char incr1[] = "x++";
    char incr2[] = "++x";
    for(int i = 0; i < arrL; i++){
        if( strcmp(arr[i], incr1) == 0 || strcmp(arr[i], incr2) == 0 ){
            x++;
        }else{
            x--;
        }
    }
    return x;
}