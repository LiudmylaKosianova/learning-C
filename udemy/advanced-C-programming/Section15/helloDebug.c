#include <stdio.h>

#define DEBUG

int addNum(int a, int b, int c){
    return a+b+c;
}

int main(){

    //printf("Hello, where can I find json?");
    int a, b, c, nRead;
    nRead = scanf("%d %d %d", &a, &b, &c);

    #ifdef DEBUG
        fprintf(stderr, "Number of integers read = %i\n", nRead);
        fprintf(stderr, "a = %d, b = %d, c = %d\n", a, b, c);
    #endif

    int sum = addNum(a,b,c);
    printf("The sum is: %d\n", sum);

    return 0;
}