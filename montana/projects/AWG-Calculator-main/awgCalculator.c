#include <stdio.h>

int main(){

    double cur, diam;
    int awg;
    printf("Welcome to the AWG Calculator!\n\n");
    printf("\tEnter your electrical current in Amps: ");
    scanf("%lf", &cur);


    if(cur <= 0.83){
        awg = 28;
        diam = 0.013;
    }else if(cur>0.83 && cur<=1.3){
        awg = 26;
        diam = 0.016;
    }else if(cur>1.3 && cur<=2.1){
        awg = 24;
        diam = 0.02;
    }else if(cur>2.1 && cur<=3.0){
        awg = 22;
        diam = 0.025;
    }else if(cur>3.0 && cur<=5.0){
        awg = 20;
        diam = 0.03;
    }else if(cur>5.0 && cur<=10.0){
        awg = 18;
        diam = 0.04;
    }else if(cur>10.0 && cur<=13.0){
        awg = 16;
        diam = 0.05;
    }else if(cur>13.0 && cur<=15.0){
        awg = 14;
        diam = 0.06;
    }else if(cur>15.0 && cur<=20.0){
        awg = 12;
        diam = 0.08;
    }else if(cur>20.0 && cur<=30.0){
        awg = 10;
        diam = 0.1;
    }else if(cur>30.0 && cur<=40.0){
        awg = 8;
        diam = 0.129;
    }else if(cur>40.0 && cur<=55.0){
        awg = 6;
        diam = 0.16;
    }else if(cur>55.0 && cur<=70.0){
        awg = 4;
        diam = 0.2;
    }else if(cur>70.0 && cur<=95.0){
        awg = 2;
        diam = 0.26;
    }else if(cur>95.0 && cur<=110.0){
        awg = 1;
        diam = 0.29;
    }else if(cur>110.0 && cur<=125.0){
        awg = 0;
        diam = 0.325;
    }else{
        printf("\tYour current %.2E Amps is out of the scope of this calculator\n", cur);
        return 0;
    }

    printf("\tFor %.2E Amps you can use %d AwG wire\n", cur, awg);
    printf("\tThe diameter of this wire is %.3lf inches\n", diam);


    return 0;
}