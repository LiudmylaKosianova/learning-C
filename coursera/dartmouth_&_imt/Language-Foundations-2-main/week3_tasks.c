/*You are still conducting linguistic research! This time, you'd like to write a program to find out how many letters occur 
multiple times in a given word. Your program should read a word from the input and then sort the letters of the word alphabetically 
(by their ASCII codes). Next, your program should iterate through the letters of the word and compare each letter 
with the one following it. If these equal each other, you increase a counter by 1, making sure to then skip ahead far enough 
so that letters that occur more than twice are not counted again. You may assume that the word you read from the input has 
no more than 50 letters, and that the word is all lowercase.*/

#include <stdio.h>
int main (void)
{
    char word[50];
    char letter;
    int j=0;
    int i=0;
    int count=0;
    int swap=0;
    int length=0; //because I want to know how long the given word is
    scanf("%s", word);
    
    while (word[i]!='\0'){
        length ++;
        i++;
    }
    //hopefully it will sort the letters in a given word
    for (j=0; j<length-1; j++) {
        for (i=0; i<length-1; i++) {
            if (word[i] > word[i+1]) {
                swap = word[i];
                word[i] = word[i+1];
                word[i+1] = swap;
            }
        }
    }
   //now let's hunt for repeated letters
    
    for (i=0;i<length-1;i++)
    {
        if(word[i]==word[i+1])
        {
          count++;
          letter=word[i];
          while(word[i+1]==letter){
              i++;
          }
        }
      
    }
    printf("%d", count);  
    return 0;
}


/*You are conducting a linguistic study and are interested in finding words that contain the letter 't' or 'T' in the first half of the word
(including the middle letter if there is one). Specifically, if the first half of the word does contain a 't' or a 'T', your program should output
a 1. If the first half does not contain the letter 't' or 'T', but the second half does, then your program should output a 2. 
Otherwise, if there is no 't' or 'T' in the word at all, your program's output should be -1. You may assume that the word entered does not have more
than 50 letters.*/

#include <stdio.h>
int main(void){
    char word[50];
    int i=0;
    int length=0;
    int foundt=0;
    scanf("%s", word);
    while (word[i]!='\0'){
        i++;
        length++;
    }
    i=0;
    while (!foundt && word[i]!='\0'){
        if(word[i]=='t' || word[i]=='T'){
            foundt=1;
            if (i<=length/2){
                printf("%d",1);
                }else{
                printf("%d",2);
            }
        }else{
            i++;
        }
    }
    if (!foundt){
        printf("%d", -1);
    }
    return 0;
}


/*Your job is to find the length of the longest word in a text with no punctuation or special characters of any kind - 
only contains words. To do so, please write a C-program that takes as a input first the number of words in a text, 
followed by all of the words in the text. The output of your program should be the length of the longest word in the text.
To simplify your program, you can assume that the longest word will not exceed 100 characters.*/

#include <stdio.h>
int main (void){
    int number = 0;
    int l = 0;
    int maxi = 0;
    char word[101];
    scanf("%d", &number);
    for (int i=0;i<number;i++){
        scanf("%s", word);
        l=0;
        while(word[l]!='\0'){
            l++;
        }
        if(l>maxi){
            maxi = l;
        }
    }
    printf("%d",maxi);
    return 0;
}


/*Your job is to write a C-program that will tell a fan which line to stand in.
To simplify the program, you may assume that student names are less than 50 characters long and contain no spaces. 
Your program should output an integer value (1 or 2) depending on whether the fan should join line 1 (name has even number of letters)
or line 2 (name has odd number of letters).*/

#include <stdio.h>
int main (void){
    char name[51];
    scanf("%s", name);
    int i = 0;
    while(name[i]!='\0'){
        i++;
    }
    if(i%2==0){
        printf("1");
    }else{
        printf("2");
    }
    return 0;
}


/*Write a C-program that prints out a word as many times as specified. The number of repetitions and the word 
should be given as input to the program. You may assume that the word has no more than 100 characters 
(be sure to also reserve space for the null terminator, \0, though!).*/

#include <stdio.h>
int main (void){
    int times = 0;
    char word[101];
    scanf("%d %s", &times, word);
    for(int i=0; i<times;i++){
        printf("%s\n", word);
    }
    return 0;
}

