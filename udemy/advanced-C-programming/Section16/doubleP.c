#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void sayHello(char **ptr){
    *ptr = malloc(sizeof(char) * 255);
    strcpy(*ptr, "Hello there");
}


int main(){

    int v = 11;
    int *p1 = NULL;
    int **p2 = NULL; //double pointer
    /*double pointer can store the address of anoutther
    pointer only, not an address of int variable*/

    p1 = &v;
    p2 = &p1;

    printf("%p address of v\n",(void*) &v);//%p expects void pointer, otherwise, there can be unexpected results
    printf("%p address of p1\n", (void*) &p1);
    printf("%p address of p2\n",(void*) &p2);

    printf("%d value of v\n", v);
    printf("%p value of p1\n",(void*) p1);
    printf("%p value of p2\n",(void*) p2);

    printf("**p2 = %d\n", **p2);//the same as *(*p2)

    char *ptr = NULL;
    sayHello(&ptr); //this will pass a double pointer
    printf("%s\n", ptr);
    free(ptr);
    return 0;
}