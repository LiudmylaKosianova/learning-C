#include<stdio.h>

int main(){
    int apple = 8;
    int kiwi = 7;
    unsigned int fruit;

    fruit = apple + kiwi;
    printf("There are %u fruits\n", fruit);

    unsigned int plum = 2000000000;
    unsigned int peach = 2000000000;
    fruit = plum + peach;
    printf("Now there are %u fruits\n", fruit);

    float pear = 7.56;
    float mandarin = 9.7;
    float fruitF = pear + mandarin;
    printf("Float fruit is %.1f\n", fruitF);

    char c = 'B'; // 66
    int i = 22;
    float f = 0.8;
    double sum = c + i + f;
    printf("The sum is %.lf\n", sum);

    int myInt;
    float myFloat;
    myInt = (int) f;
    myFloat = (float) i;
    printf("myInt is %d and myFloat is %.3f\n", myInt, myFloat);






    return 0;
}