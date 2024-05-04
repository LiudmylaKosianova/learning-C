#include <stdio.h>
#include <stdarg.h>
#include <math.h>

double sample(int count, ...);//... is called ellipsis

int main(){

    printf("%.3f\n", sample(4, 25.0, 27.3, 26.9, 25.7));


    return 0;
}
double sample(int count, ...){
    double sum = 0;
    va_list args1;
    va_start(args1, count);

    va_list args2;
    va_copy(args2, args1);//copied args1 into args2, now they are independant of each other

    for (int i=0; i<count; i++){
        double num = va_arg(args1, double);
        sum += num;
    }

    va_end(args1);

    double mean = sum / count;
    double sum_sqr_diff = 0;

    for(int j = 0; j < count; j++){
        double num = va_arg(args2, double);
        sum_sqr_diff += (num - mean) * (num-mean);

    }
    va_end(args2);


    return sqrt(sum_sqr_diff/count);
}