#include <stdio.h>
/*Find the Greatest Common Devisor*/

int findGCD(int a, int b);

int main(){


    return 0;
}

int findGCD(int a, int b){
    

    while(a != b){
        if (a > b){
            return findGCD(a-b, b);
        }else{
            return findGCD(a, b-a);
        }
    }

    return a;
}