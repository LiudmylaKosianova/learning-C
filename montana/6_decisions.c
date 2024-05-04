#include <stdio.h>

int main(){

    /*
    ask a user for a number
    check the number
    print statements
    */

   int a, b;
   printf("Enter your number: ");
   scanf("%d", &a);
   printf("You entered %d\n", a);
   if(a < 0){
    printf("You entered a negative number\n");
   } else if(a > 0){
    printf("You entered a positive number\n");
   } else{
    printf("You entered number zero\n");
   }
   if((a == 1) || (a == 21)){
    printf("Your number is either 1 or 21\n");
   }else{
    printf("Your number is neither 1 nor 21\n");
   }

   printf("Enter one more integer: \n");
   scanf("%d", &b);
   switch(b){
    case 11:
    printf("11 is an odd number.\n");
    break;
    case 10:
    printf("10 is an even number\n");
    break;
    default:
    printf("You number is neither 11 nor 10\n");
    break;
   }



    return 0;
}
