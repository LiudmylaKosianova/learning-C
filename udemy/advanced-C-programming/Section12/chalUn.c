#include <stdio.h>

union student{
    char letterGrade;
    int roundGrade;
    float exactGrade;
};


int main(){

    union student mi, mo;
    mi.letterGrade = 'A';
    mi.exactGrade = 1.1;
    mo.letterGrade = 'B';
    printf("Mo grades is %c", mo);
    

    return 0;
}