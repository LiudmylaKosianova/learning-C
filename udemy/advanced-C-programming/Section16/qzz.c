#include <stdio.h>

int main(){

    // int a = 7;
    // int *ptr1 = &a;
    // int **ptr2 = &ptr1;
    // int **ptr3 = &*ptr2;

    int a[3] = {1, 2, 3};
    int *p = a;
    int **r = &p;
    printf("%p %p", (void*)*r,(void*) a);

    return 0;
}