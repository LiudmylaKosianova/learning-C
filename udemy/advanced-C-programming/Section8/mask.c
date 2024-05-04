#include <stdio.h>

int main(){

    int flag = 15; //   0000 1111 in binary
    int mask = 182; //  1011 0110 in binary

    //flag = flag | mask;

    //clear bits using &
    //flag = flag & ~(mask);

    //toggle the bits (turn it on, if it's originally off and turn it off, if it's originally on)
    //to do so, put 1 to the corresponding bits, that you want to toggle
    flag = flag ^ mask; //  1011 1001 in binary

    //check the value of a bit
    



    return 0;
}