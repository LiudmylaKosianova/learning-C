#include <stdio.h>
#include <math.h>

#define Tmin 0.0
#define Tmax 6.28
#define Npts 25

int main(void){
    
    /*variables for this program*/
    double Tstep = (Tmax - Tmin) / (Npts-1); 
    double T[Npts], vsin[Npts], dVd[Npts], icap[Npts];
    double C;
    int i, j;

    printf("Welcome to the Capacitor Current Calculator!\n\n");
    printf("\tEnter a value for capacitance in Farads: ");
    scanf(" %lf", &C);
    //printf("\tYou entered %.1lf\n", C);
    printf("\tHere are your results: \n\n");
    
    /*fill T[] array - time*/
    T[0] = Tmin;  
    for(i=1; i<Npts; i++){
        T[i] = T[i-1] + Tstep;  
    }

    /*fill vsin[] array - sin of time*/
    for(i=0; i<Npts; i++){
        vsin[i] = sin(T[i]);
    }

    /*fill dVd[] array - derivative */
    for(i=0; i<Npts; i++){
        dVd[i] = (vsin[i+1] - vsin[i]) / Tstep;
    }

    /*fill icap[] array - current*/
    for(i=0; i<Npts; i++){
        icap[i] = C*dVd[i];
    }

    printf("Ind\tC (F)\tT (s)\tv (v)\tdVdT\tic (A)\n");
    printf("---\t-----\t-----\t-----\t-----\t-----\n");
    for(i=0; i<Npts; i++){
        printf("%d\t%.3lf\t%.3lf\t%.3lf\t%.3lf\t%.3lf\n", i, C, T[i], vsin[i], dVd[i], icap[i]);
    }
    return 0;
}