#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>

void *helloFun(){
    printf("HelloFun\n");
    return NULL;
}
void *print_thread(void *ptr){    
    printf("%s\n", (char*)ptr);
}
struct argT{
    int id;
    int sum;
    char *message;
};
void *ptrint_argT(void *ptr){
    struct argT *redSofa;
    redSofa = (struct argT *)ptr;
    redSofa->id = pthread_self();
    printf("id=%d, sum=%d, message=%s\n",redSofa->id, redSofa->sum, redSofa->message);
}

int main(int argc, char *arg[]){

    pthread_t myThread;

    struct argT blueSky;
    blueSky.id = 0;
    blueSky.sum = 73;
    blueSky.message = malloc(sizeof(char)*100);
    blueSky.message = "Hello message";

    pthread_create(&myThread, NULL, ptrint_argT, (void*)&blueSky); 
    pthread_join(myThread, NULL);
    pthread_exit(NULL);    

    // pthread_t redSofa;
    // pthread_create(&redSofa, NULL, helloFun, NULL );    
    // pthread_join(redSofa, NULL);
    // pthread_exit (NULL);

    // pthread_t thr1, thr2;
    // char *mes1 = "thread 1";
    // char *mes2 = "thread 2";
    // int r1, r2;
    // r1 = pthread_create(&thr1, NULL, print_thread, (void*)mes1);
    // r2 = pthread_create(&thr2, NULL, print_thread, (void*)mes2);
    // pthread_join(thr1, NULL);
    // pthread_join(thr2, NULL);

    // printf("thr1 returns %d\n", r1);
    // printf("thr2 returns %d\n", r2);

    // pthread_exit(NULL);

    return 0;
}