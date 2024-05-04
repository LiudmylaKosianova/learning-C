#include <stdio.h>

// struct creation
typedef struct Complex {
    double real;
    double imag;
} complex;

int main() {

    // create struct variables
    complex c1, c2, result;

    // get real and imag input for c1
    scanf("%lf %lfi", &c1.real, &c1.imag);

    // get real and imag input for c2
    scanf("%lf %lfi", &c2.real, &c2.imag);

    // subtract real and imaginary parts
    result.real = c1.real - c2.real;
    result.imag = c1.imag - c2.imag;
    
    printf("%.2lf + %.2lfi", result.real, result.imag);

    return 0;
}