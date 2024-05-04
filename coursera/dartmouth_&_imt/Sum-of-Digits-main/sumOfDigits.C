/*Please write a C-program that uses a recursive function called "sumOfDigits()" to compute the sum of the digits of a number.
 To do so, your main function should first read an integer number as input and then call sumOfDigits(), 
 which should in turn call itself until there are no digits left to sum, at which point the final sum should display to the user. 
*/
 
 
 #include <stdio.h>
 int sumOfDigits(int);
 
 int main(void){
 int givenN;
 int summ;

 scanf("%d", &givenN);
 summ = sumOfDigits(givenN);
 printf("%d", summ);
 
 return 0;
 }  
 
 int sumOfDigits(int wow){
 if (wow%10 == wow){
 return wow;}
 else{ 
 return wow%10 + sumOfDigits(((wow-(wow%10)))/10);}
 }
