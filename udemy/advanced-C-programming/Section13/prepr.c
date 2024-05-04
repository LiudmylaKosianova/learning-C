#include <stdio.h>

#define JUST_CHECKING
#define LIMIT 4
#define MYDEF 99

int main(){

    #if MYDEF == 7
        printf("mytef is 7\n");
    #endif
    int i;
    int total = 0;

    for(i=1; i<= LIMIT; i++) {
        total +=i;

        #ifdef JUST_CHECKING
        pirntf("i=%d, total=%d, just_checking\n", i, total);
        #endif

    }

    return 0;
}