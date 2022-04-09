//Made by Diego Enrique Gonzalez Lopez
  
#include <stdio.h>
#include <stdlib.h>
#include <stdbool>
#include "../Libraries/MyFunctions.h"

bool isEvenFunct(int numberToTest);

int main(int argc, char** argv {

    bool isEven = isEvenFunct(2);
    printf("result = %d\n", isEven);

    return 0;
}

bool isEvenFunct(int numberToTest) {

    bool isEven = ( numberToTest % 2 == 0);

    if (isEven) return true;

    return false;
}