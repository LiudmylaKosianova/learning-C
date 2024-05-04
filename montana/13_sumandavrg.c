#include <stdio.h>

int main(){

    float D[] = {3.4, 5, 9, -2};
    float Dsum = 0;
    int i;

    for(i=0; i<4; i++){
        Dsum += D[i];
        printf("Adding %.2f to Dsum... Dsum current is %.2f\n", D[i], Dsum);
        
    }

    printf("The sum of all D elements is %.2f\n", Dsum);

    float Davrg;
    //Davrg = Dsum / 4;
    //if I don't know the number of elements in array
    Davrg = Dsum / ( sizeof(D) / sizeof(D[0]) );
    printf("The average of D elements is %.2f\n", Davrg);

    return 0;
}