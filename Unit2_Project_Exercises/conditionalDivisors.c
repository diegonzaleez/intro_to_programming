//Made by Diego Enrique Gonzalez Lopez

#include <stdio.h>

int main(){
    int i, numberS;

    printf("Between 0 to..");
    scanf("%d", &numberS);

    printf("The numbers divisible by 3 and 5 from 0 to %d are: \n", numberS);
    for (i = 1; i <= numberS; i++){
        if (i % 3 == 0 && i % 5 == 0){
            printf("%d", i);
        }
    }
printf("\n");
return 0;
}