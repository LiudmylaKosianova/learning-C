#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(){

    /*atoi() - coverts to integer*/
    char a[11] = "100";
    int value = atoi(a);
    printf("value=%d\n",value);

    /*atof() - converts to float */
    float value1 = atof(a);
    printf("value1=%.3lf\n",value1);

    /*atol()*/
    long int value2 = atol(a);
    printf("value2=%ld\n",value2);

    /*sprintf()*/
    sprintf(a,"%d\n", 45);
    printf("%s\n", a);

    /*strtod()*/
    char aa[] = "123.45zyyhoo";
    char *end;
    double v = strtod(aa, &end); //&end - because it takes double pointer
    printf("v=%lf\n", v);

    /*strtof()*/
    char aaa[] = "23.55 7.9";
    char *end1 = NULL;
    float val1 = strtof(aaa, &end1);
    float val2 = strtof(end1, NULL);

    printf("val1=%f and val2=%f\n", val1, val2);

    srand(time(0)); //seed to generate random number
    printf("%d\n", rand());
    printf("%d\n", rand()%5+1);//will generate random numbers in range 1-5
    return 0;
}