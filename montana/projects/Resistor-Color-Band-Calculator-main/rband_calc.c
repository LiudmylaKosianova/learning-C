#include <stdio.h>
#include <string.h>
#include <math.h>

double rband_calc(char *Band1, char *Band2, char *Band3);

int main(void){

    char Band1[10];
    char Band2[10];
    char Band3[10];
    double Resistance;

    printf("\n");
    printf("Welcome to the Resistor Color Band Calculator!\n");
    printf("\nPlease, enter valid names of the color bands:\n");
    char *colours[] = {"black", "brown", "red", "orange", "yellow", "green", "blue", "violet", "grey", "white"};
    int ma = sizeof(colours) / sizeof (colours[0]);
    for(int i=0; i<ma-1; i++){
        printf("%s, ", colours[i]);
    }
    printf("white\n");
    printf("\n\tEnter your band 1 color: ");
    fgets(Band1, sizeof(Band1), stdin);
    Band1[strlen(Band1) - 1] = '\0';

    printf("\tEnter your band 2 color: ");
    fgets(Band2, sizeof(Band2), stdin);
    Band2[strlen(Band2) - 1] = '\0';

    printf("\tEnter your band 3 color: ");
    fgets(Band3, sizeof(Band3), stdin);
    Band3[strlen(Band3) - 1] = '\0';

    printf("\n\tBased on your bolor bands of: %s, %s, %s\n", Band1, Band2, Band3);
    Resistance = rband_calc(Band1, Band2, Band3);
    printf("\tYour resistance is %.2lf Ohms\n", Resistance);
    printf("\n");

    return 0;
}

double rband_calc(char *Band1, char *Band2, char *Band3){
    double rVal;
    int N;
    int i;

    //turn color to figure for band 1 and band 2
    char *colours[] = {"black", "brown", "red", "orange", "yellow", "green", "blue", "violet", "grey", "white"};
    int ma = sizeof(colours) / sizeof (colours[0]);
    for(i=0; i<ma; i++){
        if((strcmp(colours[i], Band1) == 0)){
            N = i*10;
            break;
        }
    }
    for(i=0; i<ma; i++){
        if((strcmp(colours[i], Band2) == 0)){
            N = N + i;
            break;
        }
    }
    rVal = (double) N;

    //turn color to figure for band 3 and find the answer
    for(i=0; i<ma; i++){
        if((strcmp(colours[i], Band3) == 0)){
            int pw = i;
            rVal = pow(10,i) * rVal;
            return rVal;
        }
    }
    
    
     

}