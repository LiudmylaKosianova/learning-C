#include <stdio.h>
#include <math.h>

/*
for some reason function DecToBin() works correctly only if 
I comment on lines of the previous code.
In other case, the output is : 5 in decimal = 4294967400 in binary
Mystery
*/

int BinToDec(long long n);
long long DecToBin(int n);

int main(){
    
    long long bi;
    long long resultB;
    int result =0, de =0;

    // printf("Enter a binary number: ");
    // scanf("%lld", &bi);
    // result = BinToDec(bi);
    // printf("%lld in binary = %d in decimal\n", bi, result);

    printf("Enter a decimal number: ");
    scanf("%d", &de);
    resultB = DecToBin(de);
    printf("%d in decimal = %lld in binary\n", de, resultB);


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
long long DecToBin(int n){
    long long result;
    int rem=0, i=1;
    while ( n != 0){
        rem = n%2;
        n = n/2;
        result += rem * i;
        i = i*10;
    }
    return result;

}