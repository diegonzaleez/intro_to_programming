//Made by Diego Enrique Gonzalez Lopez

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "../Libraries/MyFunctions.h"

bool isEvenFunct(int numberToTest);

int main(int argc, char** argv) {

    bool isEven = isEvenFunct(2);
    printf("result = %d\n", isEven);
    int varA = 5;
    int varB = 7;

    printf("before function varA= %d, varB = %d\n",  varA, varB);

    swap(varA, varB);

    printf("after function varA= %d, varB = %d\n", varA, varB);

    return 0;
}
