//Made by Diego Enrique Gonzalez Lopez
  
#include <stdio.h>

#define SIZE 4
#define PI 3.1416

int main(){
    int len = 4;
    int myArray[SIZE] = {5,1,20,60}

    for(int i = 0; i < len; i++){
        printf("curretValue: %d\n", myArray[i]);
        myArray[i] = myArray[i] * 2;
        printf("updatevalue: %d\n", myArray[i]);
        printf("--------\n");
    }
    return 0;

}