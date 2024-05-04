
/* TASK 1

 * You are developing an elixir that supposedly makes a person younger.
 * You just need to get the software working correctly before starting to market your product. 
 * Your program keeps track of a person's age, but in order to be more secretive you work with a pointer 
 * rather than the variable that stores the age directly.
 *
 * You are provided with a main function -- please complete it. Do not change any of the lines of code 
 * that have already been completed. Please only change the lines that are currently comments.
 */

#include <stdio.h>

int main(void) {

    int age;

    // add a line here that declares an integer pointer named "ageptr"
    //int * ageptr;

    scanf("%d", &age);

    // add a line here that stores the address of age in ageptr  
    int * ageptr = &age;

    printf("The secret address is...%p\n", ageptr);

    // add a line here that prints out the address stored in ageptr  

    printf("Now take three drops of the magic elixir. \n");

    // add a line that uses only ageptr to lower the age by 5 years
    * ageptr=* ageptr - 5;

    printf("Did the elixir work? You are %d years old!", age);

    return 0;

}



/* TASK 2 
 *
 * You are continuing to work on your elixir of youth, and it turns out that, before purchasing the elixir, 
 * customers would like to know how young they will become after drinking the elixir!
 * The way your elixir works is that anyone who is at least 21 years old becomes ten years younger. However, 
 * the elixir does not work on anyone twenty years old or younger - when these people try the elixir, they actually double in age!
 * You have already created a main function, shown below. All you need to do now is write a function which accepts 
 * the integer pointer "ageAddr" as an argument and modifies the integer this pointer points to according to the rules of your elixir. 
 * Since you are using pointers to change the value of the variable age, your function should have a void return type. 
 * Be sure not to modify the code that has been given to you.
 */

#include <stdio.h> 

//Write your function prototype here
void change(int *);

int main(void){
	int age;
	int *ageAddr = &age;
	scanf("%d", ageAddr);
	printf("Your current age is %d.\n", age);

	//Write your function call here
	change(&age);

	printf("Your new age will be %d!\n", age);
	return 0;
}


//Write your function here
void change (int * a){
if (*a >21){
*a = *a -10;}
else{*a = * a * 2;}}

/* TASK 3
*
* Within this program, we will pass an array with 6 integers to a function, have the function swap the first and last integer,
* the second and the second to last integer, the third and the third to last integer.
* The function is called reverseArray and doesn't return anything (void). It should take one parameter, 
* representing the array of integers. 
* The main function first reads 6 integers from the input, and assigns them to the array. The main function then 
* calls reverseArray, passing the array as an argument.
* The main function then prints the reversed array.
*/

#include <stdio.h>
void reverseArray(int*);

int main(void){

int arr[6];
//I read the integers and assign them to the array
for (int i=0;i<6;i++){
scanf("%d", &arr[i]);
}
//I call the function
reverseArray(arr);

//I print the changed array
 for (int i=0;i<6;i++){
        printf("%d ", *(arr+i));
    }
return 0;
}
void reverseArray (int * numbers){
int temp;
temp = * numbers;
* numbers = * (numbers+5);
* (numbers+5) = temp;
temp = *(numbers+1);
*(numbers+1) = *(numbers + 4);
*(numbers+4) = temp;
temp = *(numbers + 2);
*(numbers+2)= *(numbers+3);
*(numbers+3)=temp;
}

