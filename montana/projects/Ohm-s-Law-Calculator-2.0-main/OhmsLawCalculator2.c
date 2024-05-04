#include <stdio.h>
#include <math.h>

void print_menu(void);//function to print the menu
double calc_V_from_PnI(double P, double I);//function to perform V=P/I
double calc_V_from_PnR(double P, double R);//function to perform V=sqrt(P*R)
double calc_V_from_InR(double I, double R);//function to perform V=I*R

int main(){
    int q = 0;
    int c;
    double P,R,I,V;

    printf("Welcome to the Ohm's Law Calculator v2.0!");

    do{
        print_menu();
        scanf(" %d", &c);
        switch(c){
            case 1:
            printf("\n\tEnter P in Watts: ");
            scanf(" %lf", &P);
            printf("\tEnter I in Amps: ");
            scanf(" %lf", &I);
            V = calc_V_from_PnI(P,I);
            printf("\n\tYour Voltage = %.3lf Volts", V);
            break;
            case 2:
            printf("\n\tEnter P in Watts: ");
            scanf(" %lf", &P);
            printf("\tEnter R in Ohms: ");
            scanf(" %lf", &R);
            V = calc_V_from_PnR(P,R);
            printf("\n\tYour Voltage = %.3lf Volts", V);
            break;
            case 3:
            printf("\n\tEnter I in Amps: ");
            scanf(" %lf", &I);
            printf("\tEnter R in Ohms: ");
            scanf(" %lf", &R);
            V = calc_V_from_InR(I,R);
            printf("\n\tYour Voltage = %.3lf Volts", V);
            break;
            case 4:
            printf("\n\tExiting...\n");
            q = 4;
            break;
            default:
            printf("\n\tYou didn't enter a valid choise, please try again...");
            break;
        }

    }while(q != 4);
    

    return 0;
}

void print_menu(void){
    printf("\n\n");
    printf("\tHere are your calculation options:\n\n");
    printf("\t1. Find Voltage based on Power and Current (V=P/I).\n");
    printf("\t2. Find Voltage based on Power and Resistance (V=sqrt(P*R)).\n");
    printf("\t3. Find Voltage based on Current and Resistance (V=I*R).\n");
    printf("\t4. Quit.\n\n");
    printf("Enter your choice: ");
}
double calc_V_from_PnI(double P, double I){
    double V = P / I;
    return V;
}

double calc_V_from_PnR(double P, double R){
    double V = sqrt(P*R);
    return V;
}

double calc_V_from_InR(double I, double R){
    double V = I*R;
    return V; 
}

