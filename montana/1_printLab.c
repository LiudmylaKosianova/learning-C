#include <stdio.h>

int main() {

    int first, second, third;
    short firstS, secondS, thirdS;
    first = 22;
    firstS = 22;
    second = 2147483648;
    secondS = 32768;
    third = 2147483647;
    thirdS = 32767;
    printf("int 22 is printed %d and int 2147483648 is printed %d\n", first, second);
    printf("short 22 is printed %d and short 32768 is printed %d\n", firstS, secondS);
    printf("surprise\n");
    printf("third is %d, and thirdS is %d", third, thirdS);
 



    return 0;
}