#include <stdio.h>

// create Employee struct
struct Employee{
    int age;
    char name[50];
};

int main() {

    // create struct variable named employee1
    struct Employee employee1;

    // get age input for employee1's age
    scanf("%d ", &employee1.age);

    // get name input for employee1's name
    fgets(employee1.name, sizeof(employee1.name), stdin);

    // print name and age using employee1
    printf("%s", employee1.name);
    printf("%d", employee1.age);

    return 0;
}