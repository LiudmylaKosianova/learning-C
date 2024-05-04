#include <stdio.h>

/*border styles*/
#define SOLID 0
#define DOTTED 1
#define DASHED 2

/*colours*/
#define BLUE 4
#define GREEN 2
#define RED 1

#define BLACK 0
#define YELLOW (RED|GREEN)
#define MAGENTA (RED|BLUE)
#define CYAN (GREEN|BLUE)
#define WHITE (RED|GREEN|BLUE)

const char *colours[8] = {"black", "red", "green", "yellow", "blue", "magenta","cyan", "white"};

struct onscreen_box{

    unsigned int opaque:1;//1-opeque, 0-transparen
    unsigned int fillColour:3;
    unsigned int:4; //padding
    unsigned int borderShown:1;//1-shown, 0-not shown
    unsigned int borderColour:3;
    unsigned int borderStyle:2;
    unsigned int:2;//padding
};

void show_settings(const struct onscreen_box *ptr);

int main(){

    struct onscreen_box box = {1,YELLOW,1,GREEN,DASHED};
    printf("The initial settings are:\n");
    show_settings(&box);
    box.borderColour = BLACK;
    show_settings(&box);

    return 0;
}

void show_settings(const struct onscreen_box *ptr){
    printf("Box is %s\n",ptr->opaque == 1 ? "opeque":"transparent");
    printf("The fill colour is %s\n", colours[ptr->fillColour]);
    printf("Border is %s\n", ptr->borderShown == 1 ? "shown":"not shown");
    printf("The border colour is %s\n", colours[ptr->borderColour]);
    printf("The border style is ");

    switch (ptr->borderStyle){
        case SOLID  :printf("solid\n"); break;
        case DOTTED :printf("dotted\n"); break;
        case DASHED :printf("dashed\n"); break;
        default     :printf("unknown\n");
    }
    printf("\n");
}