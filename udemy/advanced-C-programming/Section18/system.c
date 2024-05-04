#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int main(){

    char command[70];
    strcpy(command, "ls -la");
    system(command);

    /*getenv()*/
    char *str = NULL;
    str = getenv("HOME");
    printf("%s \n", str);



    return 0;
}
