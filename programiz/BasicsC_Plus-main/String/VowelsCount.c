#include <stdio.h>

int main() {

    char text[150];

    // get input value for text using fgets()
    fgets(text, sizeof(text), stdin);

    // variable to count number of vowels
    int vowels = 0;

    // loop to access each character of text
    for (int i = 0; text[i] != '\0'; ++i) {

        // check if character at ith position is a vowel (lowercase or uppercase)
        if( (text[i]== 65 || text[i] == 97) || (text[i]== 69 || text[i] == 101) || (text[i]== 73 || text[i] == 105)||(text[i]== 79 || text[i] == 111) ||(text[i]== 85 || text[i] == 117) ){
            vowels++;
        }
    }

    // print the value of vowel
    printf("%d", vowels);

    return 0;
}