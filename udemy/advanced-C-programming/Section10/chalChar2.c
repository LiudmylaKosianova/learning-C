/*converts upper -> lower case and <- in a file*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void convertCase(FILE *fptr, const char *path);


int main(){

    FILE *fPtr = NULL;
    char path[100];

    printf("Path to the file: ");
    scanf("%s", path);

    fPtr = fopen(path, "r");

    if(fPtr == NULL){
        printf("Can't open the file\n");
        exit(EXIT_FAILURE);
    }
    convertCase(fPtr, path);

    return 0;
}

void convertCase(FILE *fptr, const char *path){
    FILE *dest = NULL;
    char ch = '\0';

    dest = fopen("temp.txt", "w");//create and open a temporary file
    
    if(dest == NULL){
        printf("Can't create a temporary file\n");
        fclose(fptr);
        exit(EXIT_FAILURE);
    }

    while ( (ch = fgetc(fptr) ) != EOF){

        if(isupper(ch)){
            ch = tolower(ch);
        }
        else if(islower(ch)){
            ch = toupper(ch);
        }

        fputc(ch, dest);
    }

    /*close all files and delete the original file*/
    fclose(fptr);
    fclose(dest);
    remove(path);

    rename("temp.txt", path);
}