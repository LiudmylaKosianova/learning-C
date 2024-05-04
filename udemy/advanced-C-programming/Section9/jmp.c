//setjmp() and longjmp()

#include <stdio.h>
#include <setjmp.h>
#include <stdlib.h> // for exit(0)

jmp_buf buf;
void myFunc(){
    printf("This is myFunc\n");
    longjmp(buf,1);
    printf("This will not be printed, because of longjmp");
}

int main(){
/* It will crate infinite loop 

    int i = setjmp(buf);
    printf("i=%d\n", i);
    longjmp(buf, 42);
    printf("Will this be printed?\n");

*/

    // int i = setjmp(buf);//setjmp returned 0
    // printf("i = %d\n", i);
    // if (i != 0) exit(0);
    // longjmp(buf,42);//buf is now 42, come back to setjmp
    // return 0;
    if(setjmp(buf))
        printf("back in main\n");
    else{
        printf("first time through\n");
        myFunc();
    }
    return 0;
}