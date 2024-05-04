#include <stdio.h>
#include <math.h>

long long DecToBin(int n);

int main(){
    
    
    long long resultB;
    int result =0, de =0;
 

    printf("Enter a decimal number: ");
    scanf("%d", &de);
    resultB = DecToBin(de);
    printf("%d in decimal = %lld in binary\n", de, resultB);


    return 0;
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