#include <stdio.h>
#include "chal.h"

int main(){

    char myStr[] = "I am learning to create a static library and it is interesting";
    int frq = 0;
    frq = frequencyOfChar('a', myStr);
    printf("%d\n", frq);

    return 0;
}