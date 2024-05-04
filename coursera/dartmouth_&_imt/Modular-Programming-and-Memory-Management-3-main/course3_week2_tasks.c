/*Your job is to write a program that shows, in human-readable form (see below for specifics), how much memory a set of variables of a certain type 
will use. Your program should read a character that identifies the data type ('i' for int, 's' for short, 'c' for char, 'd' for double). Next 
it should read an integer that indicates how many variables of the given type you wish to store.
Your program should then calculate the amount of memory required to store the given variables. Your program needs to be written in such a way 
that it would also perform correctly on other computers. In other words, rather than hard-coding specific sizes for the different variable types, 
your program needs to use the "sizeof()" function to determine how much memory an individual variable of a given type needs.

Finally, you need to output the amount of space required by your variables to the screen. */

#include <stdio.h>

int main(void){
int howMany;
char d;
int y=0;
scanf("%c %d",&d,&howMany);
if(d=='i'){y=sizeof(int);}
else if(d=='s'){y=sizeof(short);}
else if(d=='c'){y=sizeof(char);}
else if(d=='d'){y=sizeof(double);}
howMany*=y;
if (howMany/1000000 !=0){
        printf("%d MB and ", howMany/1000000);
        howMany=howMany-((howMany/1000000)*1000000);
    } 
if (howMany/1000!=0){
    printf("%d KB and ", howMany/1000);
    howMany=howMany-((howMany/1000)*1000);
    printf("%d B", howMany);
    }else{printf("%d B",howMany);}
 return 0;
}
