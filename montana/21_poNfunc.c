#include <stdio.h>
#include <math.h>

#define Tmin 0.0
#define Tmax 6.28
#define Npts 10

//function to double everything

void double_up(double *Aptr, int N);
void copy_ar(double *Aptr, double *Bptr, int N);

int main(void){

    double T[Npts];
    double Vsin[Npts];
    double *Vsin_p = Vsin;
    double Tstep = (Tmax -Tmin) / (Npts - 1);
    int i;

    //fill in T array - time
    T[0] = Tmin;
    for(i=1; i<Npts; i++){
        T[i] = T[i-1] + Tstep;
    }

    //fill Vsin array - sin
    for(i=0; i<Npts; i++){
        Vsin[i] = sin(T[i]);
    }

    //print original arrays
    for(i=0; i<Npts; i++){
            printf("T[%d]=%.3lf\tVsin[%d]=%.3lf\n", i, T[i], i, Vsin[i]);
        }

    //call function
    double_up(Vsin_p,Npts);

     for(i=0; i<Npts; i++){
            printf("T[%d]=%.3lf\tVsin[%d]=%.3lf\n", i, T[i], i, Vsin[i]);
        }


    return 0;
}

void double_up(double *Aptr, int N){
    int i;
    for(i=0; i<N; i++){
        *(Aptr + i) = *(Aptr +i) * 2;
    }
}

void copy_ar(double *Aptr, double *Bptr, int N){
    int i;
    for(i=0; i<N; i++){
        *(Bptr + i) = *(Aptr + i);
    }
}