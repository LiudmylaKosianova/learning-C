#include <stdio.h>

long long DecToBin(int n);

int main(){

    int num1 = 0, num2 = 0;
    long long Bnum1 = 0, Bnum2 = 0;
    printf("Enter the first decimal number: ");
    scanf("%d", &num1);
    printf("Enter the second decimal number: ");
    scanf("%d", &num2);
    int decimal_left_shift = 0;
    long long complement1=0, complement2=0;
    long long and1=0, and2=0;
    long long or1=0, or2=0;
    long long exor1=0, exor2=0;
    long long shift_left=0;
    Bnum1 = DecToBin(num1);
    Bnum2 = DecToBin(num2);
    complement1 = DecToBin(~num1);
    complement2 = DecToBin(~num2);
    and1 = DecToBin(num1&num2);
    and2 = DecToBin(num2&num1);
    or1 = DecToBin(num1|num2);
    or2 = DecToBin(num2|num1);
    exor1 = DecToBin(num1^num2);
    exor2 = DecToBin(num2|num1);
    decimal_left_shift = num1 << 2;
    shift_left = DecToBin(decimal_left_shift);

    //printing
    printf("The result of applying the ~ operator on number %d (%lld) is %lld\n", num1, Bnum1, complement1);
    printf("The result of applying the ~ operator on number %d (%lld) is %lld\n", num2, Bnum2, complement2);
    printf("The result of applying the & operator on numbers %d (%lld) and %d (%lld)  is %lld\n", num1, Bnum1,num2, Bnum2, and1);
    printf("The result of applying the & operator on numbers %d (%lld) and %d (%lld)  is %lld\n", num2, Bnum2,num1, Bnum1, and2);
    

    return 0;
}
long long DecToBin(int n){
    //doesn't represent negative numbers in two's complement
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
