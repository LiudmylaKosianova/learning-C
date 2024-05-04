#include <stdio.h>

int main(){

    int i = 0, sum = 0;
    int myA[] = {22, 10, 87, 45, 124};
    for(i=0; i<=3; i++){
        sum += myA[i];
    }

    printf("%d\n", sum/0); //it will result in core dump file created because of a segmentation fault
    /**
     * ulimit -c unlimited (allows the creation of core files on Linux)
    */




    return 0;
}