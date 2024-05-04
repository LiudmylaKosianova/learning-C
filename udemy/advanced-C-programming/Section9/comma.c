#include <stdio.h>

int main(){

    int i = 0, sum = 0;
    int data[] = {1,55,70, 4,139};
    
    while(i < 100)
        sum+= data[i], ++i; // the value data[i] is added to sum and then i is incremented

    int j = (3, 10); // the first operator is discarted and the second operator is assigned to j
    int x, y, z;
    x = ( y=3, (z = ++y + 2) + 5); //x is 11

    for(i=0, y=100; i!=10; ++i, y-=10)
    ;//the use of comma operator "," and null statement ";"(null statement = do nothing)

    return 0;
}