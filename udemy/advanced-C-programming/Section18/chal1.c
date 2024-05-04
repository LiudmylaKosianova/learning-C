#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    /*random number in range -0.5 to 0.5*/

    srand(time(0));
    for(int i=0; i>50; i++){
        printf("%.2f ", (rand()% 2001 - 1000) / 2.e3);
    }



    return 0;
}