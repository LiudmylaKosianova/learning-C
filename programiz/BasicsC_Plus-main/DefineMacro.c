#include <stdio.h>
#include<math.h>
// define macros
#define PI 3.1415

int main() {

    double radius;
    scanf("%lf", &radius);

    // find the area of circle and print it
    double area = pow(radius,2) * PI;
    printf("%.2lf", area);

    return 0;
}