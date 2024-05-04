#include<stdio.h>
//takes input in centimetres and converts them into feet

int main(){
    double centimetres;
    scanf("%lf", &centimetres);
    double feet = centimetres * 0.0328;

    printf("%lf", feet);
    
    return 0;
}