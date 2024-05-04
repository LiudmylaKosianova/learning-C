#include <stdio.h>
#include <math.h>

int BinToDec(long long n);


int main(){
    
    long long bi;
    long long resultB;
    int result =0;

    printf("Enter a binary number: ");
    scanf("%lld", &bi);
    result = BinToDec(bi);
    printf("%lld in binary = %d in decimal\n", bi, result);
 


    return 0;
}

int BinToDec(long long n){
    int result = 0, i = 0, rem = 0;
    while (n != 0){
        rem = n%10; //gets the most right digit
        n = n/10;
        result += rem * pow(2, i);
        i++;

    }

    return result;
}
 