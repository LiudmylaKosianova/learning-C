//flexible array memeber

#include <stdio.h>
#include <stdlib.h>

struct myArray    
{
    int length;
    int array[];
    /* data */
};


int main(){

    struct myArray *s;
    int a;
    printf("How long is the array? ");
    scanf("%d", &a);
    s = malloc(sizeof( struct myArray) + a*sizeof(int) );
    s->length = a;
    for(int i=0; i<a; i++){
        s->array[i] = i+1;
    }

    printf("Array elements: ");
    for(int i=0; i<a; i++){
       printf("%d ",s->array[i]);
    }
    printf("\n");



    return 0;
}