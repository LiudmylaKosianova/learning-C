/* You are planning a car trip so you post on a carpooling website in order to share the cost of the trip.
If you have 0 passengers the carpool site does not charge anything and you alone pay the full cost of the trip. 
If you have 1 or more passengers the carpool site adds a $1 fee to the cost of the trip and evenly divides the total cost ($1 fee + gas)
among the passengers and you. You want to write a program that calculates the cost you have to pay.
The program should read the number of passengers (an integer) and the cost of gas for the trip (a decimal number). 
The program should then print the cost that you have to pay (a decimal number) with 2 digits after the decimal point.*/

#include <stdio.h>
int main (void){
    int passen = 0;
    double gas = 0.0;
    scanf("%d %lf", &passen, &gas);
    if (passen){
        printf("%.2lf", (gas +1)/(passen + 1));
    }else{
        printf("%.2lf", gas);
    }
    return 0;
}

/*The hostel in which you plan to spend the night tonight offers very interesting rates, as long as you do not arrive too late. 
Housekeeping finishes preparing rooms by noon, and the sooner guests arrive after noon, the less they have to pay. 
You are trying to build a C program that calculates your price to pay based on your arrival time.

Your program will read an integer (between 0 and 12) indicating the number of hours past noon of your arrival. 
For example, 0 indicates a noon arrival, 1 a 1pm arrival, 12 a midnight arrival, etc. The base price is 10 dollars, 
and 5 dollars are added for every hour after noon. Thankfully the total is capped at 53 dollars, so you'll never have to pay more than that.
Your program should print the price (an integer) you have to pay, given the input arrival time.*/

#include <stdio.h>
int main (void){
    int time = 0;
    scanf("%d", &time);
    int pay = time*5 + 10;
    if (pay < 53){
        printf("%d", pay);
    }else{
        printf("%d", 53);
    }
    return 0;
}

/*You arrive in front of a bridge that you must cross to reach a village before dark. Crossing the bridge is not free - 
the bridgekeeper asks you to roll two dice to determine the cost. You decide to write a program to verify that he is charging the right price.

Your program should read two integers, between 1 and 6, representing the values of each die. If the sum is greater than or equal to 10, 
then you must pay a special fee (36 coins). Otherwise, you pay twice the sum of the values of the two dice. Your program must then display
the text "Special tax" or "Regular tax" followed by the amount you have to pay on the next line.*/

#include <stdio.h>
int main (void){
    int oned = 0;
    int twod = 0;
    scanf("%d%d", &oned, &twod);
    
    if((oned + twod) >= 10){
        printf("Special tax\n36");
    }else{
        printf("Regular tax\n%d", (oned+twod)*2);
    }
    return 0;
}

/*You decide to bet on the final match of the Tug of War National Championship. 
Prior to the match the names and weights of the players are presented, alternating by team (team 1 player 1, team 2 player 1, team 1 player 2, and so on).
There is the same number of players on each side. You record the player weights as they are presented and calculate a total weight for each time 
to inform your bet. You write a C program to assist with this.

Your program should first read an integer indicating the number of members per team. Then, the program should read the player weights 
(integers representing kilograms) alternating by team. After calculating the total weight of each team, the program should display the text
"Team X has an advantage" (replacing X with 1 or 2 depending on which team has a greater total weight).You will then display the text
"Total weight for team 1:" followed by the weight of team 1, then "Total weight for team 2:" followed by the weight of team 2 (see example below).
You are guaranteed that the two teams will not have the same total weight.*/

#include <stdio.h>
int main (void){
    int players = 0;
    int playerw = 0;
    int totalw1 = 0;
    int totalw2 = 0;
    scanf("%d", &players);
    for (int i = 0; i < players; i++){
        scanf("%d", &playerw);
        totalw1 = totalw1 + playerw;
        scanf("%d", &playerw);
        totalw2 = totalw2 + playerw;
    }
     
    if(totalw1 > totalw2){
        printf("Team 1 has an advantage\n");
    }else{
        printf("Team 2 has an advantage\n");
    }
    printf("Total weight for team 1: %d\n", totalw1);
    printf("Total weight for team 2: %d\n", totalw2);
}


