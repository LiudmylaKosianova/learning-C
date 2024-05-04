#include <stdio.h>

//function to print 1D array
void print_array(int A[], int size){
    int i;
    printf("Your array = { ");
    for(i=0; i<size; i++){
        printf("%d ", A[i]);
    }
    printf("}\n");
}

int main(void){

    int E[5] = {-2,1,5,6,77};

    print_array(E,5);

    int Y[] = {8,-9,6,-7,11};
    int Ysize = sizeof(Y) / sizeof(Y[0]);

    printf("Ysize of %d\n", Ysize);
    print_array(Y, Ysize);



    return 0;
}