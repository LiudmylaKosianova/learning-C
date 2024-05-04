#include <stdio.h>

int main(){

    int number, bit, newNumber, onORoff;

    /*Ask for the user input*/
    printf("Enter your number: ");
    scanf("%d", &number);
    printf("What bit (0-31) do you want to set? ");
    scanf("%d", &bit);

    /*Read the bit at the specified position*/
    onORoff = (number>>bit) & 1;
    printf("the %d bit is currently set to %d\n", bit, onORoff);

    printf("Setting the bit ...\n");

    /*Set the bit (turn it on)*/
    newNumber = (1<<bit) | number;
    printf("Number before setting %d bit: %d\nNumber after setting %d bit: %d\n", bit, number, bit, newNumber);









    return 0;
}