#include <stdio.h>
#include <signal.h>
#include <stdlib.h>

void handler_zero(int signum);

int main(){

    int result=0, v1=123, v2=0;

    void (*handlerReturn)(int);

    handlerReturn = signal(SIGFPE, handler_zero);
    if(handlerReturn == SIG_ERR){
        perror("Signal Error ");
        return 1;
    }
    result = v1 / v2;

    return 0;
}

void handler_zero(int signum){
    if(signum == SIGFPE){
        printf("Reseived SIGFPE\n");
        exit(0);
    }else{
        printf("Received %d signal\n", signum);
        return;
    }
}

