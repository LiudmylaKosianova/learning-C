#include <stdio.h>

// function to find the square
void findSquare(int * n) {
    *n =  *n * *n;
}

int main() {
    int number;
    scanf("%d", &number);

    // call function by passing address of number
    findSquare(&number);

    printf("%d", number);

    return 0;
}