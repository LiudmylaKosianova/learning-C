 /*Please write a C-program that uses a recursive function called "sumOfDigits()" to compute the sum of the digits of a number.
 To do so, your main function should first read an integer number as input and then call sumOfDigits(), which should in turn call itself until there are no digits left to sum, at which point the final sum should display to the user.
Here is the main idea of how the recursion in sumOfDigits() should work:

sumOfDigits(6452) = 2 + sumOfDigits(645)

sumOfDigits(645) = 5 + sumOfDigits(64)

...

sumOfDigits(6) = 6
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
 


#include <stdio.h>
/*
Write a C-program that converts metric measurements to imperial system values. Measurements are provided to your program in meters, 
grams or degrees Celsius and must be converted to feet, pounds and degrees Fahrenheit, respectively.
On the first input line you are given the number of conversions to be made. Each of the following lines contains a value to be converted as well as its unit: m, g or c (for meters, grams or degrees Celsius). There will be a space between the number and the unit. You should print your output value for each input line immediately after calculating it (ie, you do not have to wait until you have read all inputs).
*/
int main(void){
    int u;
    double number;
    char letter;
    scanf("%d", &u);
    for (int i=0;i<u;i++){
        scanf("%lf %c", &number, &letter);
        if(letter =='m'){
        printf("%lf ft\n", number*3.2808);
        }else if(letter=='g'){
        printf("%lf lbs\n", number*0.002205);
        }else{
        printf("%lf f\n", 32+number*1.8);}
    }
    return 0;
}

/*The goal of this problem is to find the smallest integer in a list of numbers.

To help you with this task, please write a function called min() that finds and returns the smallest amongst two integers (be sure to also write a prototype for this function). The function thus takes two integers as input and returns the smallest of the two. This function will use an if statement with a condition that contains either "less than" or "greater than".

Next, please use min() in your main function to work your way through an entire list of numbers in order to find its minimum. The first number you read gives the number of elements in the list of integers under consideration. You will then read the integer values, using min() to keep only the smallest integer read at each step. In the end, please print out the smallest integer in the list.

*/
 #include <stdio.h>
int min(int x, int y);

int main(void){

int times;
int number;
int minN;

scanf("%d",&times);
scanf("%d",&minN);

for(int i=0;i<times-1;i++){
scanf("%d",&number);
minN =min(minN, number);
}

printf("%d",minN);
return 0;
}

int min(int x, int y){
int minN;
if(x<y){
minN = x;
return minN;}
else{minN = y;}
return minN;
}
  

