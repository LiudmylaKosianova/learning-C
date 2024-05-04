#include <stdio.h>

int main (void){

    double a,b,c,d;
    a = 1.602e-19; //charge of an electron
    b = 0.0; //holds current
    c = 1 / a; //electrons per 1 coulomb
    //d = c * b; electrons per given current

    printf("Welcome to the Electron Calculator!\n");
    printf("\n\tEnter your electrical current in Amp: ");
    scanf("%lf", &b);
    printf("\n\n");
    printf("\tYou entered %.4E Amps\n", b);
    printf("\tCharge of an electron is %.4E Coulombs\n",a);
    printf("\tThere are %.4E electrons in one Coulomb\n", c);
    d = c * b;
    printf("\tSo there are %.4E electrons flowing per second in %.4E Amps\n",d,b);
    printf("\tThat's a lot of electrons!\n");



    return 0;
}