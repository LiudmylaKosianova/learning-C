#include<stdio.h>
//takes 5 integer input as scores
//assigns grades to students based on their average scores
double getAverageScore(double array[5]);
char computeGrade(double a);

int main(){

    double scores[5]; //= {55, 64, 75, 80, 65};
    for(int i = 0; i < 5; i++){
        scanf("%d", &scores[i]);
    }    
 
    double averageScore = getAverageScore(scores);
    printf("%.2lf\n", averageScore);
    char grade = computeGrade(averageScore);
    printf("%c", grade);

    return 0;
}

double getAverageScore(double array[5]){
    double sum = 0;
    for (int i = 0; i < 5; i++){
        sum += array[i];
    }
    return sum/5;
}
char computeGrade(double a){
    char grade;
    if(a >= 80.0){
        grade = 'A';
    }else if(a >= 60.0){
        grade = 'B';
    }else if(a >= 50.0){
        grade = 'C';
    }else{
        grade = 'F';
    }
    return grade;
}