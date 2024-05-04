#include <stdio.h>
//takes input in kilometres and converts them to miles

int main(){
    double km;
    scanf("%lf", &km);
    double miles = km / 1.6;

    printf("%.3lf", miles);
    return 0;
}