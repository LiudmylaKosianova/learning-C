#include <stdio.h> 

int fibNumber(int n){ 
    if(n==0){
        return 0;
    }else if(n==1){
        return 1;
    }
    else{
        return fibNumber(n-1) + fibNumber(n-2);
    }
} 

int fibSum (int rabbit){    
    
    int sum = 0;
    for(int i = 0; i<rabbit; i++){
         
        sum += fibNumber(i);
         
    }
    return sum;
}