#include<stdio.h>

int main(){

    float var3 = 3.14;
    double var4 = 1234567.1234567;
    float qe = -1.602E-19;   //I can specify number in exponents form, using "E" or "e"

printf("var3 holds: %10.2f\n", var3);
printf("var4 holds: %.7f \n", var4);
printf("qe holds:   %.22f\n", qe);

    char var1 = 'C';
    char var2 = 'a';

    printf("var1 in ASCII:\t%c\n", var1);
    printf("var1 in hex:\t0x%x\n", var1);
    printf("var1 in decimal:\t%d\n", var1);

    int one;
    float two;
    char three;

    printf("Could you enter an integer: \n");
    scanf("%d", &one);
    printf("Your integer is %d", one);
    

    return 0;
}