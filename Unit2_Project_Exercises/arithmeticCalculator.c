//Made by Diego Enrique Gonzalez Lopez

#include <stdio.h>
#include <stdlib.h>

int main (int argc, char ** argv){
    float num_1 = atoi(argv[1]);
    float num_2 = atoi(argv[2]);
    int add = num_1 + num_2;
    int subs = num_1 - num_2;
    int mult = num_1 * num_2;
    float div = num_1 / num_2;
    printf("The sum of the values is equal to %d\n", add);
    printf("The substraction of the values is equal to %d\n", subs);
    printf("The multiplication of the values is equal to %d\n", mult);
    printf("The division of the values is equal to %f\n", div);

    return 0;
}