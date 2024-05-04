#include <stdio.h>

void myRedSofa(void){
    printf("%s - is the function name\n", __func__);
}

int main(){
    #if (__STDC__ == 1)
        printf("ISO conforming\n");
    #else
        printf("ISO not conforming\n");
    #endif

    printf("File is %s, line is %d\n", __FILE__, __LINE__);
    printf("Program last compiled at %s on %s\n", __TIME__, __DATE__);

    myRedSofa();

    return 0;
}