#include<stdio.h>
#include<stdlib.h>

/*
Given an integer array nums of length n, you want to create an array ans of length 2n 
where ans[i] == nums[i] and ans[i + n] == nums[i] for 0 <= i < n (0-indexed).
Specifically, ans is the concatenation of two nums arrays.
Return the array ans.
*/

int* arrayConcat(int*, int);
int main(){
    //ask for user input
    printf("How many numbers do you want to give? ");
    int numsL;
    scanf("%d", &numsL);
    int nums[numsL];
    printf("Enter your %d integer numbers: ", numsL);
    for(int i = 0; i < numsL; i++){
        scanf("%d", &nums[i]);
    }
    
    //creates array
    int* ans;
    ans = arrayConcat(nums,numsL);
    printf("[");
    for(int i = 0; i < numsL*2; i++){
        printf(" %d ", ans[i]);
    } 
    printf("]\n"); 

    free(ans);

    return 0;
}
int* arrayConcat(int* nums, int numsL){
    int ansL = numsL*2;
    int* ans = (int*) malloc (ansL * sizeof(int));
    int i, j = 0;
    while(i<numsL){
        ans [j] = nums[i];
        //printf("i is %d, and nums i is %d\n", i, nums[i]);
        j++;
        i++;
        if(i == numsL){
            i = 0;
        }
        if(j == ansL){
            break;
        } 
    }

    return ans;
}