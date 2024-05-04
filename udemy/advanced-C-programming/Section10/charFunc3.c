#include <stdio.h>

int main(){
/* reads from the file and puts it to the file
creating the duplicate of the content in the file
*/
    // char ch = '\0';
    // FILE *fp = NULL;
    // if ( fp = fopen("filename.c", "rw") ){
    //     ch = getc(fp);
    //     while (ch != EOF){
    //         putc (ch, fp);
    //         ch = getc(fp);
    //     }
    //     fclose(fp);
    // }
/* will print the ch2 character to the terminal*/
    // char ch2 = 'd';
    // putc(ch2, stdout);

    char mystr[] = "Hello, \nmy string!";
    int i = 0;
    while( mystr[i] != '\0'){
        if(mystr[i]!='\n'){putchar(mystr[i]);}        
        i++;

    }

    /*fputsc()*/
    FILE *pfile = NULL;
    char c = '\0';
    pfile = fopen("filename.txt", "w");
    
    if(pfile!=NULL){
        for(c='A'; c<='Z'; c++){
            fputc(c,pfile);//will write alphabet to a file
            fputc(c,stdout); //print to terminal
        }
        fclose(pfile);

    }



    return 0;
}