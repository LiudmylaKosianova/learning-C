#include <stdio.h>

int f_loop(int n);

int main(){

    printf("%d\n", f_loop(5));
    return 0;
}
int f_loop(int n){
    int factorial = 1;

    for(int i=0; i<n; i++){
        factorial *= n-i;
    }
    return factorial;
}