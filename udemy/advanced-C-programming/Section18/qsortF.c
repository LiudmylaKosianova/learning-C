#include <stdlib.h>
#include <stdio.h>

int compare(const void*, const void*);

int main(){

    int data[] = {54, 7, 14, 8, 27};
    qsort(data, 5, sizeof(int), compare);

    for(int i=0; i<5; i++){
        printf("%d...", data[i]);
    }

    return 0;
}

int compare(const void *n1, const void *n2){
    const int i = *(const int*)n1;//dereference the pointer to number 1
    const int ii = *(const int*)n2;
    return i - ii;
}