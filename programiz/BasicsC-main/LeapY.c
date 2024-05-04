#include<stdio.h>
//takes year as an input
//checks if it is a leap year or not

int main(){
    int year;
    scanf("%d", &year);
    if((year%400) == 0){
        printf("Leap year");
    }else if((year%4)== 0 && (year%100)!=0){
        printf("Leap year");
    }else{
        printf("No");
    }
    return 0;
}