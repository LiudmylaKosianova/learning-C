#include <stdio.h>
#include <math.h>


#define Tmin 0.0 //decimal places indicate double/float
#define Tmax 6.28
#define Npts 10 //no decimal places indicate int

int main(void){

    int i;

    /*calculate the "step" size*/

    //double Tstep = (Tmax - Tmin) / (Npts); // "step size" is smaller and deosn't include Tmax
    double Tstep = (Tmax - Tmin) / (Npts -1); //"step size" is larger and includes Tmax
    double T[Npts], Vsin[Npts];

    /*fill the T[] array with time steps*/
    T[0] = Tmin; // it will initialize first element to be the Tmin
    for(i=1; i<Npts; i++){
        T[i] = T[i-1] + Tstep; //continuously add step size to the prior value
    }

    /*fill the Vsin[] array with sin(t)*/
    for(i=0; i<Npts; i++){
        Vsin[i] = sin(T[i]);
    }

    /*find derivative*/
    double dVdT[Npts];
    for(i=0; i<Npts; i++){
        dVdT[i] = (Vsin[i+1] - Vsin[i]) / Tstep;
    } 

    /*find integral and sum of areas of polygons*/
    double PolArea[Npts];
    for(i=1; i<Npts; i++){
        PolArea[i] = Vsin[i] * Tstep;
    }
    double TotArea = 0.0;
    for(i=0; i<Npts; i++){
        TotArea += PolArea[i];
    }
    

    /*print the result*/
    for(i=0; i<Npts; i++){
        printf("T[%d]=%.2lf \tVsin[%d]=%.3lf \tdVdT[%d]=%.3lf \tPolArea[%d]=%.3lf\n",
         i, T[i], i, Vsin[i], i, dVdT[i], i, PolArea[i]);
    }

    printf("The total area is %.3lf\n", TotArea);

 
    return 0;
}