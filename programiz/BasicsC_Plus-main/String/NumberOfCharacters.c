#include<stdio.h>
//takes a string as an input and counts the number of characters in it

int main(){
    char text[100];
    fgets(text, siziof(text), stdin);
    int count, i = 0;

    while(text[i] != '\0'){
        i++;
        count++;
    }

    printf("%d", count);

    return 0;
}