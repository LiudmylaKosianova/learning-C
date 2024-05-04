#include <stdio.h>
#include <stdlib.h>

int new = 134;

void changeP(int **ptr){
    *ptr = &new;
}

void allocateMemory(int **ptr){
    *ptr = (int *)malloc(sizeof(int));
    printf("ptr address function - %p\n", (void*)*ptr);
}

int main(){
    
    int a = 217;
    int *ptrA = &a;
    printf("ptrA at address %p holds value %p points to %d\n",(void*)&ptrA, (void*)ptrA, *ptrA);
    changeP(&ptrA);
    printf("ptrA at address %p holds value %p points to %d\n",(void*)&ptrA, (void*)ptrA, *ptrA); 

    int *ptr = NULL;
    allocateMemory(&ptr);
    int ptrInt = 7;
    ptr = &ptrInt;
    printf("*ptr = %d\n", *ptr);
    printf("ptr address main - %p\n", (void*)&ptr);
    free(ptr);

    return 0;
}