#include <stdio.h>

int main(){

    int myI = 750;
    int *ptr1 = NULL;
    int **ptr2 = NULL;
    ptr1 = &myI;
    ptr2 = &ptr1;

    /*display the value of myI*/
    printf("%d, %d, %d\n", myI, *ptr1, **ptr2);
    /*find address of myI*/
    printf("%p, %p, %p\n", (void*)&myI, (void*)ptr1,(void*)*ptr2);
     /*find the value of ptr1*/
    printf("%p, %p\n", (void*)ptr1, (void*)*ptr2);
    /*find address of ptr1*/
    printf("%p, %p\n", (void*)&ptr1, (void*)ptr2);
    /*find the double value of ptr2*/
    printf("%d, %d\n", *ptr1, **ptr2);
    /*find the address of ptr2*/
    printf("%p\n", (void*)ptr2);
    




    return 0;
}