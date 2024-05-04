#include<stdio.h>
//takes input integers for length and breadth of the rectangle 
//calculates and prints area of the rectangle

int main(){
    int length;
    int breadth;

    scanf("%d",&length);
    scanf("%d",&breadth);

    int area = length * breadth;

    printf("%d", area);

    return 0;
}