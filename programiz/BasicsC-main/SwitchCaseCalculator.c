#include<stdio.h>

int main (){
    double first, second;
    char op;
    scanf("%lf %lf %c", &first, &second, &op);

    switch(op){
        case'+':
        printf("%.1lf", first+second);
        break;
        case'-':
        printf("%.1lf", first-second);
        break;
        case'*':
        printf("%.1lf", first*second);
        break;
        case'/':
        printf("%.1lf", first/second);
        break;
        
        // if op doesn't match with any of the cases
        default:
            printf("Error!");
    }
    return 0;
}