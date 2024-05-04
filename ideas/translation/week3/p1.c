/*Задача 1.
Напишіть функцію, яка приймає ціле число і друкує інформацію про парність чи
непарність числа.

Problem 1.
Write a function, that takes an integer and prints information
about it being odd or even.
*/
#include <stdio.h>
#include <stdlib.h>

void parity_check(int num){
    if(num%2==0){printf("%d is even\n", num);}
    else{printf("%d is odd\n", num);}
}

int main(int argn, char *arg[]){

    int num = atoi(arg[1]);
    parity_check(num);

    return 0;
}
