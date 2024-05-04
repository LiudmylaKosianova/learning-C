#include <stdio.h>

unsigned long long int fibSum (unsigned long long int rabbit);
unsigned long long int fibNumber (int n);

int main(){
    
    int number;
    printf("\nWelcome!\n");
    do{
        printf("Please, enter a positive number:");
        scanf("%d", &number);
        if(number<0){
            printf("The number must be greater than 0\n");
        }
    }while(number<0);

    printf("\nYou entered %d\n", number);
    printf("The sum of the first %d Fibonacci numbers is: %llu\n\n",number, fibSum(number));
     
    
    return 0;
}

unsigned long long int fibNumber(int n){ 
    if(n==0){
        return 0;
    }else if(n==1){
        return 1;
    }
    else{
        return fibNumber(n-1) + fibNumber(n-2);
    }
} 

unsigned long long int fibSum (unsigned long long int rabbit){    
    
    unsigned long long int sum = 0;
    for(int i = 0; i<rabbit; i++){
         
        sum += fibNumber(i);
         
    }
    return sum;
}