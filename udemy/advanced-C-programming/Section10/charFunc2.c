#include <stdio.h>
#include <ctype.h>

int main(){

    char ch = 0;
    /*the first not space character will end the loop*/
    while (isspace (ch = (char)getchar())); //reads as long as there are spaces
        ungetc(ch,stdin);//puts back a not space character
    
    printf("The char is %c\n", getchar());

    return 0;
}