#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <string.h>

int main(){

    // fork();

    // printf("Hello there\n");

    pid_t pid;
    char buf[100];

    fork();
    pid = getpid();

    for(int i=0; i<5; i++){
        sprintf(buf,"This line is from pid %d, i=%d\n", pid, i );
        write(1, buf, strlen(buf));
    }


    return 0;
}