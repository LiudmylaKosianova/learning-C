//variable length array

#include <stdio.h>

int main(){

    int size, element;

    printf("How many elements do you want to sum? ");
    scanf("%d", &size);

    int arr[size];
    int i = size;
    int j = 0;
    int sum = 0;
    while(i>0){
        printf("Enter the element to sum: ");
        scanf("%d", &element);
        arr[j] = element;
        sum+=element;
        j++;
        i--;
    }
    printf("The sum is %d\n", sum);


    return 0;
}