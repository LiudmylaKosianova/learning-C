#include <stdio.h>
//#define NDEBUG
#include <assert.h>
#include <limits.h>

static_assert(CHAR_BIT==16, "16-bit char falsely assumed");

int main(){


    // int y = 5;
    // for(int i = 0; i < 8; i++){
    //     printf("i=%d, y=%d\n", i, y);
    //     assert(i<y);
    // }
    puts("char is 16 bits\n");

    return 0;

}
