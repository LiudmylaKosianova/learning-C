#include <stdio.h>
#include <stdlib.h>

int frequencyOfChar(char myChar, char *myStr){
    int i = 0, frq = 0;
    while(myStr[i] != '\0'){
        if(myStr[i] == myChar){frq++;}
        i++;
    }
    return frq;
}

 

