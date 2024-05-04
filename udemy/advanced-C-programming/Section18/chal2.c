#include <stdio.h>
#include <stdlib.h>

/*fill array*/
void fillArray (double ar[], int i);

/*print array*/
void showArray (const double ar[], int i);

/*compare numbers*/
int compare(const void *ptr1, const void *ptr2);


int main(){
    double A[11];
    fillArray(A, 11);
    showArray(A, 11);
    qsort(A, 11, sizeof(double), compare);
    showArray(A, 11);

    return 0;
}
void fillArray (double ar[], int i){
    for(int j=0; j<i; j++){
        ar[j] = (double)random() * 1.739;
    }
}

void showArray (const double ar[], int i){
    printf("[ ");
    for(int j=0; j<i; j++){
        printf("%.3lf ", ar[j]);
    }
    printf("]\n");
}
int compare(const void *ptr1, const void *ptr2){
    const double *first = (const double*)ptr1;
    const double *second = (const double*)ptr2;
    return first - second;
}