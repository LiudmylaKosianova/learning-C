#include <stdio.h>
#include <assert.h>
#include "fi.h"

int main(){ 

    assert(fibNumber(0)==0);
    assert(fibNumber(1)==1);
    assert(fibNumber(2)==1);
    assert(fibNumber(3)==2);
    assert(fibNumber(4)==3);
    assert(fibNumber(5)==5);
    assert(fibNumber(6)==8);
    assert(fibNumber(7)==13);
    assert(fibNumber(8)==21);
    assert(fibNumber(9)==34);
    printf("\nFirst Fibonacci numbers: ");
    for(int i=0; i<10; i++){
        printf("%d ", fibNumber(i));
    }

    assert(fibSum(0)==0);
    assert(fibSum(1)==0);
    assert(fibSum(2)==1);
    assert(fibSum(3)==2);
    assert(fibSum(4)==4);
    assert(fibSum(5)==7);
    assert(fibSum(6)==12);
    assert(fibSum(7)==20);
    assert(fibSum(8)==33);
    assert(fibSum(9)==54);
    printf("\n\n");
    for(int i=0; i<10; i++){
        printf("The sum of %d Fibonacci numbers is %d\n",i, fibSum(i));
    }
    printf("\n");
    return 0;
}