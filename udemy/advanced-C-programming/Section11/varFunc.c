#include <stdio.h>
#include <stdarg.h>

double average(double v1, double v2, ...);

int main(){

    double v1 = 10.5, v2 = 2.5;
    int num1 = 6, num2 = 5;
    long num3 = 12L, num4 = 20L;

    printf("Average = %.2lf\n", average(v1, 3.5, v2, 4.5, 0.0));
    printf("Average = %.2lf\n", average(1.0, 2.0, 0.0));
    printf("Average = %.2lf\n", average((double)num2, v2, (double)num1, (double)num4, (double)num3, 0.0 ));



    return 0;
}

double average(double v1, double v2, ...){
    va_list parg; //pointer for variable argument list
    double sum = v1 + v2;
    double value = 0.0;//will be used to store the arguments' values as they will be obtained one by one
    int count = 2;//there are at least two mandatory arguments

    va_start(parg,v2);//takes the list and the last fixed argument

    while(  (value = va_arg(parg, double)) != 0.0) {//assume, that the last argument is 0.0
        sum += value;
        count++;
    }

    va_end(parg);
    return sum / count;
}