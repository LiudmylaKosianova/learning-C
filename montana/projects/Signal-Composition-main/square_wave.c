#include <stdio.h>
#include <math.h>

//time series range (0s to 1ms, 1 cycle of 1kHz wave)
#define Tmin 0.0
#define Tmax 1e-3
#define Npts 100

//frequency components of square wave
#define f1 1000.0
#define f3 3000.0
#define f5 5000.0
#define f7 7000.0
#define f9 9000.0

//magnitude components of square wave
#define v1 0.637
#define v3 0.212
#define v5 0.127
#define v7 0.091
#define v9 0.071

#define PI 3.141

void ind_sin(double *Vs, int N, const double *T, double v, double f){
    int i;
    for(i=0; i<N; i++){
        *(Vs+i) = v * sin(2*PI*f* *(T+i));
    }

}

int main(void){

    double Vs1[Npts];
    double Vs3[Npts];
    double Vs5[Npts];
    double Vs7[Npts];
    double Vs9[Npts];
    double Vs1n3[Npts];
    double Vs1n3n5[Npts];
    double Vs1n3n5n7[Npts];
    double Vs1n3n5n7n9[Npts];
    double T[Npts];
    double Tstep = (Tmax - Tmin) / (Npts - 1);
    int i, j;

    //double v[5] = {v1, v3, v5, v7, v9};
    //double f[5] = {f1, f3, f5, f7, f9};


    //fill in time step array
    T[0] = Tmin;
    for(i=1; i<Npts; i++){
        T[i] = T[i-1] + Tstep;
    } 

    //fill in  individual sine wave arrays
    ind_sin(Vs1, Npts, T, v1, f1);
    ind_sin(Vs3, Npts, T, v3, f3);
    ind_sin(Vs5, Npts, T, v5, f5);
    ind_sin(Vs7, Npts, T, v7, f7);
    ind_sin(Vs9, Npts, T, v9, f9);

    // for(i=0; i<Npts; i++){
    //     Vs1[i] = v1 * sin(2*PI*f1*T[i]);
    // }

    //fill in summed sine waves
    for(i=0; i<Npts; i++){
        Vs1n3[i] = Vs1[i] + Vs3[i]; 
    }
    for(i=0; i<Npts; i++){
        Vs1n3n5[i] = Vs1n3[i] + Vs5[i];
    }
    for(i=0; i<Npts; i++){
        Vs1n3n5n7[i] = Vs1n3n5[i] + Vs7[i];
    }
    for(i=0; i<Npts; i++){
        Vs1n3n5n7n9[i] = Vs1n3n5n7[i] + Vs9[i];
    }

    //write into a file
    FILE *tout;
    tout = fopen("square_comp.csv", "w");  

    for (i=0; i<Npts; i++){
        printf("%e, %e, %e, %e, %e, %e, %e, %e, %e\n", Vs1[i],Vs3[i],Vs5[i],Vs7[i],Vs9[i],
        Vs1n3[i], Vs1n3n5[i], Vs1n3n5n7[i], Vs1n3n5n7n9[i]);
        fprintf(tout, "%e, %e, %e, %e, %e, %e, %e, %e, %e\n", Vs1[i],Vs3[i],Vs5[i],Vs7[i],Vs9[i],
        Vs1n3[i], Vs1n3n5[i], Vs1n3n5n7[i], Vs1n3n5n7n9[i]);

    }
     
    return 0;
}