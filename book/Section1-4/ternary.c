#include <stdio.h>

int main(){

    /*ternary operator and corrresponding if-statement*/
    int y=0, x=0;
    y += x > 10? 17: 37;

    if(x>10)
        y += 17;
    else
        y += 37;
    /*prints if the number n odd or even*/
    int n = 17;
    printf("The number %d is %s\n", n, n%2==0? "even":"odd");

    /*comma operator*/
    x = (1,2,3);//x will be assigned the rightmost value, which is 3

    for(;;){}//empty for will run forever

    
    return 0;
}