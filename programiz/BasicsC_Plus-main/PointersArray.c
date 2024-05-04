#include <stdio.h>
//use pointers to find the smallest element of the array

int main() {

    // an array of numbers
    int numbers[5] = {55, 64, 75, 80, 65};

    // use logic of previous example to find the smallest element
    int smallest = numbers[0];
    
    for(int i = 0; i < 5; i++){
        if(smallest > *(numbers + i)){
            smallest = *(numbers + i);
        }
    }
    printf("%d", smallest);

    return 0;
}