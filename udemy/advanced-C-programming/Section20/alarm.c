#include <stdio.h>
#include <unistd.h>
#include <signal.h>

int main(){

    alarm(5);

    for(int i=0; i<10; i++){

        printf("%d\n", i);
        sleep(1);
    }


    return 0;
}