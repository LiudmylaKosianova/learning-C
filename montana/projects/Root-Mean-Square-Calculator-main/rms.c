#include <stdio.h>
#include <math.h>

#define Tmin 0.0
#define Tmax 6.28
#define Npts 10

//function to calculate RSM value of an incoming sine wave
double rms_calc(const double *Vptr, int N);

int main(void){

    double T[Npts]; //array for time
    double Vsin[Npts];//array for the sine
    double *T_ptr = T;
    double *Vsin_ptr = Vsin;
    double Tstep = (Tmax - Tmin) / (Npts -1);//time step for T[]
    double Vamp; //voltage amplitude will be provided by the user
    double Vrms; //RMS calculation returned by my function
    int i;

    // //fill in time array
    // T[0] = Tmin;  
    // for(i=1; i<Npts; i++){
    //     T[i] = T[i-1] + Tstep;  
    // }

    //fill in time array using pointers
    *T_ptr = Tmin;
    for(i=1; i<Npts; i++){
        *(T_ptr + i) = *(T_ptr + (i-1)) + Tstep;
    }

    printf("\n");
    printf("Welcome to the RSM Calculator!\n");
    printf("\n\tEnter the voltage amplitude of your sine wave: ");
    scanf("%lf", &Vamp);

    /*fill vsin[] array - sin of time*/
    for(i=0; i<Npts; i++){
        Vsin[i] = Vamp * sin(T[i]);
    }

    Vrms = rms_calc(Vsin_ptr, Npts);
    printf("\n");

    for(i=0; i<Npts; i++){
        printf("\tT[%d]=%.3lf\tVsin[%d]=%.3lf\n", i,T[i],i,Vsin[i]);
    }

    printf("\nThe RMS value for your sine wave is: %.3lf Volts\n", Vrms);
    printf("\n");

    return 0;
}

double rms_calc(const double *Vptr, int N){
    int sSum = 0;
    int i;
    for(i=0; i<N; i++){
        sSum += (*(Vptr + i) * *(Vptr + i));
    }

    double answer = sqrt(sSum/N);
    return answer;

}