#include <stdio.h>
#include <stdarg.h>

int add_many(int count, ...);

int main(){

    int sum1 = add_many(2, 5,5);
    printf("sum1 = %d\n", sum1);

    return 0;
}

int add_many(int count, ...){
    int sum = 0;
    va_list args;
    va_start(args, count);

    for(int i=0; i<count; i++){
        int element = va_arg(args, int);
        sum += element;
    }

    va_end(args);


    return sum;
}