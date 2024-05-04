#include <stdio.h>

// create enum size
enum Size{
    Small,
    Medium,
    Large
};

int main() {

    // create an enum variable
    enum Size mySize = Small;

    // use switch case to print size
    switch(mySize){
        case Small:
        printf("SMALL");
        break;
        case Medium:
        printf("MEDIUM");
        break;
        case Large:
        printf("LARGE");
        break;
    }

    return 0;
}