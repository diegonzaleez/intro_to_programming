//Made by:Diego Enrique Gonzalez Lopez

#include <stdio.h>
#include <stdlib.h> 

int main (int argc,char ** argv){
    float number_1 = atoi(argv[1]);
    float number_2 = atoi(argv[2]);
    float number_3 = atoi(argv[3]);
    float number_4 = atoi(argv[4]);
    float number_5 = atoi(argv[5]);
    float sum = number_1 + number_2 + number_3 + number_4 + number_5;
    float mean = sum/5;
    printf("The mean of the given numbers is %f\n", mean);

    return 0;
}