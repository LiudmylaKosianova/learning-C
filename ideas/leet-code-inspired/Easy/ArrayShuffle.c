#include<stdio.h>
#include<stdlib.h>
//Given the array nums consisting of 2n elements in the form [x1,x2,...,xn,y1,y2,...,yn].
//Return the array in the form [x1,y1,x2,y2,...,xn,yn].

int*shuffle(int*,int,int);

int main(){
    int initial[] = {2,5,1,3,4,7};
    int n = 3;

    int* shuffled = (int*)malloc(n*3 * sizeof(int));
    shuffled = shuffle(initial, 6, n);

    for(int i = 0; i<6; i++){
        printf("%d ", shuffled[i]);
    }

    return 0;
}


int* shuffle(int*nums, int numsSize, int n){
    int*returnNums;

    returnNums = (int*)malloc(numsSize * sizeof(int));
    for(int i,j = 0; i < n; i++, j+=2){
        returnNums[j] = nums[i];
    }
    int j = 1;
    for(int i = n; i < numsSize; i++, j+=2){
        returnNums[j] = nums[i];
    }    

    return returnNums;

}