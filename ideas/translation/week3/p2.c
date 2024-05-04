/*Задача 2.
Напишіть функцію яка перевірятиме чи введений рік високосний.
Task 2.
Write a function, that checks if the year is leap
*/

#include <stdio.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>

int year_check(int x){
    int answer = 0;
    if(((x%4==0)&&(x%100!=0))||(x%400==0)){answer = 1;}
    return answer;
}

void print_message(int b){
    if(b==1){
        printf("This is a leap year\n");
    }else{
        printf("This is not a leap year\n");
    }
}

int main(){

    
    char leapStr[15];
    char yearStr[5];
    int yearInt = 0;

    time_t calendar;
    time(&calendar);

    memcpy(yearStr, ctime(&calendar) + 20, 4);
    yearInt = atoi(yearStr);

    printf("The year now is %d\n", yearInt);
    print_message(year_check(yearInt));

    return 0;
}