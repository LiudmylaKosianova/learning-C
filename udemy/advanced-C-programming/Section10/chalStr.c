/*
takes a character and a file name
outputs the lines from the file, which have this character
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUF 256
int has_ch(char ch, const char *line); //takes a character and a line; checks if it is in that line

int main(int argc, char *argv[]){

    FILE *fp = NULL;
    char ch = '\0';
    char line[BUF];

    if(argc != 3){
        printf("Usage: %s character filename\n", argv[0]);
        exit(EXIT_FAILURE);
    }
    ch = argv[1][0];
    if ( (fp = fopen(argv[2], "r")) == NULL ){
        printf("Can't open the file");
        exit(EXIT_FAILURE);
    }
    //read the lines one by one and pass them to function
    while( fgets(line,BUF,fp) != NULL){//we are sure there is no null data in the file, so can use fgets()
        if(has_ch (ch, line)){
            fputs(line, stdout);
        }
    }

    fclose(fp);

    return 0;

}

int has_ch(char ch, const char *line){
    while (*line){
        if (ch == *line++)return 1;
    }
    return 0;
}