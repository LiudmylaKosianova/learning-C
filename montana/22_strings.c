#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void){

    // char Mes[10] = "Hello";
    // int sizeMes = sizeof(Mes);

    // printf("The message: **%8s** takes %d bytes\n", Mes, sizeMes);
    // printf("The message: **%-8s** takes %d bytes\n", Mes, sizeMes);

    // char a[] = "World";// a points to the first element of the array
    // char *b = "World";// b (as a pointer) point to the first element of the array

    // printf("%s \n", a);
    // printf("%s \n", b);

    // // char c[10];
    // // printf("Enter a string: ");
    // // scanf(" %s", c);
    // // printf("You entered: %s\n", c);

    // char e[10];
    // printf("Enter a string: ");
    // fgets(e, sizeof(e), stdin);
    // printf("You entered: %s\n", e);

    char str1[] = "Hello World!";
    printf("%s \n", str1);
    printf("str1 length = %ld \n", strlen(str1));
    printf("str1 length = %ld \n", sizeof(str1)); 

    char str2[10];
    printf("Enter your name: ");
    fgets(str2, sizeof(str2), stdin);
    if (strcmp(str2, "CSCI\n") == 0){
        printf("Hello, CSCI\n");
    }else{
        printf("I don't know you ...");
    }

    //char str3[10] = "Hey there";
    /*not allowed*/
    // char str3[10];
    // str3 = "Hey there";
    /*allowed*/
    
    char str3[10];
    strcpy(str3, "Hey There");
    

    char str4[10] = "Liudmyla ";
    char str5[10] = "Kosianova";
    strcat(str4, str5);
    printf("%s \n", str4);

    /*atoi()*/
    char age_str[5];
    //int age_int;
    double age_float;
    printf("Enter your age: ");
    fgets(age_str, sizeof(age_str), stdin);
    //age_int = atoi(age_str);
    age_float = atof(age_str);
    printf("You are %f years old\n", age_float);





    return 0;
}