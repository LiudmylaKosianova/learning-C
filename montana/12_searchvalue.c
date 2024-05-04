#include <stdio.h>

int main(){

    int Ar[5] = {3,5,9,-2,21};
    int Val = -2;
    int FoundFlag = 0;
    int FoundIndex = 0;
    int i;

    for(i=0; i<5; i++){
        if(Ar[i] == Val){
            FoundFlag = 1;
            FoundIndex = i;
            printf("Found it at index %d\n", i);
        }else{
            printf("Not at index %d\n", i);
        }
    }
    
    if(FoundFlag == 1){
        printf("Found %d at index %d\n", Ar[FoundIndex], FoundIndex);
    }else{
        printf("Didn't find the value\n");
    }

    return 0;
}