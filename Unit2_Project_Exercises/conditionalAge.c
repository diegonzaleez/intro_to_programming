//Made by Diego Enrique Gonzalez Lopez

#include <stdio.h>

int main (){
    char name[100];
    int aGe;

    printf("What is your name?\n");
    scanf("%s",name);
    printf("What is your age?\n");
    scanf("%d",&aGe);
    if (aGe<18){
        printf("You are not able to keep in the program\n");
    }
    else{
        printf("Welcome, %s\n", name);
    }


    return 0;
}