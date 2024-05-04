#include <stdio.h>
#include "chald.h"

int strLength(char *str){
    int length = 0, i = 0;
    while(str[i] != '\0'){
        length ++;
        i++;
    }

    return length;
}
 