#include <stdio.h>
 /*reverse the string*/

char *reversed(char *str);
int main(){

    char myStr[] = "abcd efg";
    printf("%s\n", myStr);
    printf("%s\n", reversed(myStr));

    return 0;
}

char *reversed(char *str){
    static int i = 0;
    static char rev[100];

    if(*str){//if the str is not equal to NULL
        reversed(str + 1); // go to the next character
        rev[i++] = *str;
    }
    return rev;
}