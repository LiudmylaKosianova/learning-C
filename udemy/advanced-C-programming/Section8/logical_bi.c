#include <stdio.h>

int main(){
    short int w1 = 25;//0000000000011001 in binary
    short int w2 = 77;//0000000001001101 in binary
    short int w3 = 0;
    short int w4 = 4;
    w3 = w1 & w2; //0000000000001001 (9)
    printf("w3 = %d\n", w3);
    w4 = w1 | w2;
    printf("w4 = %d\n", w4);
    short int w5 = 0;
    w5 = 147 ^ 61;
    printf("w5 = %d\n",w5);
    /*
    swap two values, with ^ there is no need for temporary variable
    */
    short int a = 5;
    short int b = 77;
    short int temp = 0;

    temp = a;
    a = b;
    b = temp;

    a ^= b;
    b ^= a;
    a ^= b;

    int c1 = 154;
    int result = 0;
    result = ~(c1);
    printf("result = %d\n", result);



    

    return 0;
}