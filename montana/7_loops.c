#include <stdio.h>

int main(){

    int i = 1;
    while(i<=5){
        printf("i is %d\n", i);
        i++;
    }
    int ii = 0;
    char quit = 'r';

    do{
        printf("ii is %d\n", ii);
        printf("Enter q if you want to quit: \n");
        scanf("%c", &quit);
        if(quit != 'q'){
            ii++;
            printf("\tContinue\n");
        }
    }while(quit != 'q');

    for(int j = 0; j < 3; j++){
        printf("j variable is %d\n", j);
    }
    return 0;
}

