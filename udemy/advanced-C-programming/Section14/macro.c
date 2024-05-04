#include <stdio.h>

#define PI 3.14 // this is a symbolic constant
//function-like macros represent expressions
// backslash is used to extand macro to the next line
#define PRNT(a,b)\    
    printf("value a = %d\n",a);\
    printf("value b = %d\n", b);

#define CIRCLE_A(X) ((PI)*(X)*(X))

#define UpTo(i,n) for((i)=0;(i)<(n); (i)++)//not syntactic -> using this macro your C code doesn't look like C

int main(){

    int a = 224;
    int b = 87;
    PRNT(a,b);

    int area = CIRCLE_A(4);
    printf("%d is area\n", area);

    return 0;
}