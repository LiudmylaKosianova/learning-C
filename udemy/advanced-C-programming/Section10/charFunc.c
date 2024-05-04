/*
stdin, stdout, stderr
*/

#include <stdio.h>

int main(){

    /*read from a file*/
    
    // char ch = '\n';
    // FILE *fp; //file pointer
    // if (fp = fopen("filename.c", "rw")){//open the file
    //     ch = getc(fp); //gets the first character from a file

    //     while (ch != EOF){//check for the end of file
    //         ch = getc(fp); //get the next character
    //     }
    //     fclose(fp); //close the file
    // } 

    // /* read from stdin (terminal, because it is also a file)*/

    // char ch2 = '\0';
    // ch2 = getc(stdin);//could be used for reading a user input 
    // printf("read the character %c\n", ch2);


    /*getchar() - reads from stdin only, does not take an argument*/

    int ch3 = 0;
    while ( ( ch3 = getchar()) != EOF){
        printf("I have read the %c character\n", ch3);
    }

    /*fgetc() - similar to getc()*/
    FILE *fp = NULL;
    char c = '\0';
    fp = fopen("filename.c", "r");
    if (fp == NULL){
        printf("Can't open the file\n");
        return 0;
    }
    printf("Reading the file ...\n");
    while(1){//infinite loop
        c = fgetc(fp);
        if(c==EOF)break;
        printf("%c ", c);
    } 
    printf("Closing the file\n");
    fclose(fp);  



    return 0;
}