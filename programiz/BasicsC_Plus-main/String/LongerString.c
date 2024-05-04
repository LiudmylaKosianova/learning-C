#include<stdio.h>

int findLength(char text[]);

int main(){
    char text1[100];
    char text2[100];

    // get 2 string inputs
    scanf("%s %s", &text1, &text2); 

    // find the length of two strings by calling findLength()
    int len1 = findLength(text1);
    int len2 = findLength(text2);

    // compare the length of two strings
    // and print the string with the larger length
    if(len1 > len2){
        printf("%s", text1);
    }else{
        printf("%s", text2);
    }
    return 0;
}

int findLength(char text[100]){
     int count = 0;
    int i = 0;
    
    // run a while loop to access each characters
    // inside loop, increase value of count
    while(text[i] != '\0'){
        count++;
        i++;
    }

    return count;
}