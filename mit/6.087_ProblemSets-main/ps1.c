#include <stdio.h>

#define squared(x) ((x)*(x))

int main(){
    /*
    double ansF = 10.0 + 2.0/3.0 - 2.0*2.0;
    double ans = 10.0 + 2.0/((3.0 - 2.0)*2.0);
    printf("%.1f\n", ansF);
    printf("%.1f\n", ans);
    // I need ans = 11.0
    */
   double ans = 180 / squared(2+1);
   printf("%.1f\n", ans);
   //ans = 93.0 when #define squared(x) x*x
   //ans = 36.0 when #define squared(x) (x*x)
   //ans = 180.0 when #define squared(x) (x)*(x)
   //ans = 20.0 when #define squared(x) ((x)*(x))

    return 0;
}
