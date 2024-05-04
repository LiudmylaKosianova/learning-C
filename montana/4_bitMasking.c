#include<stdio.h>

int main(){

    unsigned char var1 = 0b01110000;
    //printf("var1 is %08b\n", var1); not all gcc compilers can print binary(((
        /*08b - means the binary will always be 8bit wide, not less*/

    return 0;
}