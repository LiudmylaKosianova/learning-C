#include<stdio.h>
//takes age of three brothers as an input
//prints the name of the youngest brother(no twins case)

int main(){
    int jack, roman, johny;
    scanf("%d %d %d", &jack, &roman, &johny);
    if(jack < roman && jack < johny){
        printf("Jack");
    }else if(roman < jack && roman < johny){
        printf("Roman");
    }else{
        printf("Johny");
    }
    return 0;
}