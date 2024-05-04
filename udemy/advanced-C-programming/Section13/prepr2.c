#include <stdio.h>

//#pragma GCC poison printf //this will make the error if someone uses "printf()"


#pragma GCC warnin "hello"
#pragma GCC error "what?!"
#pragma message "its ok"
int main(){

    printf("Hello\n");
    return 0;
}