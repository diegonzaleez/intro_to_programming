//Made by Diego Enrique Gonzalez Lopez
  
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main (int argc, char** argv){
    printf("Bienvenido, su número es: %s %s\n", argv[0], argv[1]);
    int numero= atoi(argv[1]);
    bool isDivided = numero%2==0;

    if (isDivided){
        printf("numero par \n");      
    }
    else{
        printf("numero impar \n");
    }

    return 0;
}