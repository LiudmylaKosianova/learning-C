#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char *buffer = NULL;
    size_t bufSize = 32;
    size_t characters;

    buffer = (char*) malloc(bufSize * sizeof(char));

    if (buffer == NULL){//in case we are not able to allocate the memory
        exit(1);
    }

    printf("You need to type: ");
    characters = getline(&buffer, &bufSize, stdin);//reads the data from terminal

    printf("String typed: %s", buffer);
    printf("Number of characters typed: %zu\n", characters);

    char stri[40];
    strcpy(stri, "What a wonderful day!");
    puts(stri);

    
    
    return 0;
}