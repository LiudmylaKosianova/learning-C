#include <stdio.h>
#include <stdlib.h>

int someFunc();
void func1(int);
void func2(int);
typedef void funcType(int);

int main(){

    funcType *func_ptr = NULL;
    func_ptr = func1;
    (*func_ptr)(101);

    func_ptr = func2;

    int (*redSofa)();
    redSofa = someFunc;
    printf("redSofa address %p\n", (void*)redSofa);
    /*invoke the function using the function pointer*/   
    (*redSofa)();
    return 0;
}
int someFunc(){

    printf("This is someFunc\n");
    return 0;
}