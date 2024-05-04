/*You need to program an automatic device to monitor the manufacturing of the drug. The device measures the temperature every 15 seconds 
and provides these measurement to your program.
Your program should first read two integers representing the minimum and maximum safe temperatures. Next, your program should continuously 
read temperatures (integers) that are being provided by the device. Once the chemical reaction is complete the device will send a value of -999, 
indicating to you that temperature readins are done. For each recorded temperature that is in the correct range (it could also be equal to the min 
or max values), your program should display the text "Nothing to report". But as soon as a temperature reaches an unsafe level your program must 
display the text "Alert!" and stop reading temperatures (although the device may continue sending temperature values).*/


#include <stdio.h>
int main (void){
    int mini = 0;
    int maxi = 0;
    int temp = 0;
    scanf("%d %d", &mini, &maxi);
    while (temp != -999){
        scanf("%d", &temp);
        if(temp!=-999){
        if(temp <= maxi && temp >= mini){
            printf("Nothing to report\n");
        }else{
            printf("Alert!");
            temp = -999;
        }
        }
    }
    return 0;
    
}

/*We would like you to develop a program capable of making a child play automatically the game of "more or less" -- the child must try to guess 
a secret number. The program should respond to each guess with "it is more" or "it is less" until the child finds the right number.
Your program must first read an integer indicating the number that the child will have to find during the game. Next the program should repeatedly 
read the player's guesses and display the text "it is more" if the child has submitted a smaller number or "it is less" if they have submitted
a larger number. Once the correct number is reached, the program should print "Number of tries needed:" followed by a new line and the integer 
number of tries that it took the guesser.*/


#include <stdio.h>
int main (void){
    int secret = 0;
    int trying = 0;
    int triesneed = 0;
    scanf("%d", &secret);
    while(trying!=secret){
        scanf("%d", &trying);
        triesneed++;
        if(trying > secret){
            printf("it is less\n");
        }else if (trying < secret){
            printf("it is more\n");
        }
    }
    printf("Number of tries needed:\n%d", triesneed);
    return 0;
}

/*In order to be able to better fight various epidemics in a region, the department of medicine of a major university has launched a large study. 
Researchers are interested in how fast an epidemic spreads, and therefore the speed at which health measures must be put in place. Your program should
first read an integer representing the total population of the area. Knowing that a person was infected on day 1 and that each infected person 
contaminates two new people every day, you must calculate the day at which the entire population of the area will be infected.*/


#include <stdio.h>
int main(void){
    int people;
    int days = 1;
    int newinfected = 1;
    int totalinfected = 1;
    scanf("%d", &people);
    while (people>totalinfected){
        days ++;
        newinfected = totalinfected*2;
        totalinfected = totalinfected + newinfected;
         
    }
    printf("%d", days);
    return 0;
    
}

/*Your program will have to read a sequence of positive integers and display their sum. We do not know how many integers there will be, 
but the sequence always ends with the value -1*/


#include <stdio.h>
int main (void){
    int exp = 0;
    int summ = 1;
    while(exp!=-1){
        scanf("%d", &exp);
        summ+=exp;
    }
    printf("%d", summ);
    return 0;
}

//Create a program that displays on the screen a square of n x n stars, with the integer n given as an input.

#include <stdio.h>
int main (void){
    int row = 0;
    scanf("%d", &row);
    for(int i=0;i<row;i++){
        for(int a=0;a<row;a++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

/*Your grandparents gave you a fantastic cooking recipe but you can never remember how much of each ingredient you have to use!
There are 10 ingredients in the recipe and the quantities needed for each of them are given as input (in grams).
Your program must read 10 integers (the quantities needed for each of the ingredients, in order) and store them in an array.
It should then read an integer which represents an ingredient's ID number (between 0 and 9), and output the corresponding quantity.*/

#include <stdio.h>
int main (void){
    int ingredients[10];
    int place = 0;
    int amount = 0;
    for (int i = 0; i<10; i++){
        scanf("%d", &amount);
        ingredients[place] = amount;
        place += 1;
    }
    scanf("%d", &place);
    printf("%d", ingredients[place]);
    return 0;
}

/*You are responsible for a rail convoy of goods consisting of several boxcars. You start the train and after a few minutes 
you realize that some boxcars are overloaded and weigh too heavily on the rails while others are dangerously light. 
So you decide to stop the train and spread the weight more evenly so that all the boxcars have exactly the same weight 
(without changing the total weight). For that you write a program which helps you in the distribution of the weight.

Your program should first read the number of cars to be weighed (integer) followed by the weights of the cars (doubles). 
Then your program should calculate and display how much weight to add or subtract from each car such that every car has the same weight. 
The total weight of all of the cars should not change. These additions and subtractions of weights should be displayed with one decimal place.

You may assume that there are no more than 50 boxcars.*/

#include <stdio.h>
int main (void){
    int cars = 0;
    double weight = 0.0;
    double summ = 0.0;
    double array[50];
    int indexx = 0;
    scanf("%d", &cars);
    for(int i = 0; i<cars; i++){
        scanf("%lf", &weight);
        summ = summ + weight;
        array[indexx] = weight;
        indexx += 1;
    }
    int even = summ/cars;
    indexx = 0;
    for (int i = 0; i<cars; i++){
        printf("%.1lf\n", even - array[indexx]);
        indexx += 1;
    }
    return 0;
}

/*You plan to make a delicious meal and want to take the money you need to buy the ingredients. Fortunately you know in advance the price per pound 
of each ingredient as well as the exact amount you need. 
The program should read in the number of ingredients (up to a maximum of 10 ingredients), 
then for each ingredient the price per pound. Finally your program should read the weight necessary for the recipe 
(for each ingredient in the same order). Your program should calculate the total cost of these purchases, then display it with 6 decimal places.*/

#include <stdio.h>
int main (void){
    int number = 0;
    int i = 0;
    double price[10];
    double weight[10];
    double summ = 0.0;
    scanf("%d", &number);
    for (i=0;i<number;i++){
        scanf("%lf", &price[i]);
    }
    for(i=0;i<number;i++){
        scanf("%lf", &weight[i]);
    }
    for(i=0;i<number;i++){
        summ = summ + (price[i]*weight[i]);
    }
    printf("%lf", summ);
    return 0;
}

/*You want to determine the number of cities in a given region that have a population strictly greater than 10,000. To do this, 
you write a program that first reads the number of cities in a region as an integer, and then the populations for each city one by one (also integers).*/

#include <stdio.h>
int main (void){
    int cities = 0;
    int population = 0;
    int summ = 0;
    scanf("%d", &cities);
    for (int i=0;i<cities;i++){
        scanf("%d", &population);
        if(population > 10000){
            summ+=1;
        }
    }
    printf("%d", summ);
    return 0;
}

