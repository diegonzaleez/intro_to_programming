//Made by Diego Enrique Gonzalez Lopez
  
#include <stdio.h>
#include <stdlib.h>

int edad = 19;
int mes = &edad;

int main(int argc, char** argv){
    printf("Variable edad = %d\n",edad),
    printf("La direccion de la variable edad = %p\n", &edad);

    //creacion de pointer//

    int* myPtr = NULL;
    myPtr = &edad;
    printf("Variable pointer ´myPtr´ es igual a: %p\n", myPtr);
    printf("Dirección de la variable ´myPtr´ = %p\n", &myPtr);

    //modificacion de pointer//

    myPtr = &mes; 
    myPtr = &edad,
    printf("Valor de lo que apunta ´myPtr´ = %d\n", *myPtr);
    printf("valor de la variable edad = %d\n", edad);
    *myPtr = *myPtr * 2;
    printf("--After of be modified:--\n");
    printf("Valor de lo que apunta ´myPtr´ = %d\n", *myPtr);
    




    return 0;


}