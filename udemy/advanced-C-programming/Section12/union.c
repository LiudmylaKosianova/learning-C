#include <stdio.h>

union car{
    int i;
    float f;
    char c[40];
};

/*anonymos union*/
struct owner{
    char id[12];
};
struct company{
    char name[40];
    char place[40];
};
struct data{
    char brand[15];
    int status; //0 - owned, 1 - borrowed
   //this is anonymus union
    union{
        struct owner ownedCar;
        struct company borrowedCar;
    };
};

union mixed{
    char c;
    float f;
    int i;
};

union mixed x;

int main(){

    union car car1, car2, *car3;
    printf("Memory size of car1 = %zu\n", sizeof(car1));

    x.c = 'L';
    printf("c = %c\n",x.c);

    union mixed y = {'K'}; // only the first element
    
    return 0;
}