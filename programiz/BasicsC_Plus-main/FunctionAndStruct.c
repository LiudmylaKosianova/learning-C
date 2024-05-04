#include <stdio.h>

struct Rectangle {
    int length;
    int breadth;
};

// function to find perimeter
void findPerimeter(struct Rectangle r){
    printf("%d", 2 * r.length + 2 * r.breadth);
}

int main() {

    // declare struct variable
    struct Rectangle rect1;

    // get input value for length and breadth of rect
    scanf("%d %d", &rect1.length, &rect1.breadth);

    // function call
    findPerimeter(rect1);

    return 0;
}