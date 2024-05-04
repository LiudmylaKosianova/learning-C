#include <stdio.h>

int main(){

    double D[5] = {0.1, 0.7, -9.7, -1.5, 3};

    double Dmax;
    int i;

    Dmax = D[0];

    printf("We assume that Dmax is %.2lf\n", Dmax);

    for(i=1; i<5; i++){
        printf("\tComparing Dmax with %.2lf ...\n", D[i]);
        if(D[i] > Dmax){
            Dmax = D[i];
            printf("\tThe new max is %.2lf !\n", Dmax);
        }else{
            printf("\tNot the new max\n");
        }
    }

    printf("The max value is %.2lf\n", Dmax);

    double Dmin = D[0];
    for(i=1; i<5; i++){
        if(D[i]<Dmin){
            Dmin = D[i];
        }
    }
    printf("The min value is %.2lf\n", Dmin);

    return 0;
}