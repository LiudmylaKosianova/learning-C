#include <stdio.h>

int main(void){

    int n = 109;
    int *p = &n;

    printf("\n");
    printf("n = %d \n", n);
    printf("address of n is %p\n", p);
    printf("address of n is %p\n", &n);

    printf("\tusing n, n = %d", n);
    printf("\tusing *p, n = %d\n", *p);

    int A_int = 5;
    int B_int;

    int *A_po = &A_int;

    /*looked at the address, stored in pointer variable *A_po, 
      and then allocate the value, stored in that address, to the varible B_int*/
    B_int = *A_po; 

    printf("A_int is %d, and B_int is %d\n", A_int, B_int);
    printf("A_po has size of %ld bytes\n", sizeof(A_po));

    int i;
    int A[5] = {77, 56, 28, 99, 109};
    int *Aptr = A;

    printf("&A[0] address is %p\n", &A[0]);
    printf("Aptr address is %p\n", Aptr);

    for(i=0; i<5; i++){
      printf("A[%d] = %d\n", i, A[i]);
    }

    for(i=0; i<5; i++){
      printf("A[%d] = %d\n", i, *(Aptr + i));
    }


    return 0;
}