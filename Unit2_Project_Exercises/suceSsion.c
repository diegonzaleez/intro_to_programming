//Made by Diego Enrique Gonzalez Lopez

#include <stdio.h>

int main()
{
    int numero,a,b,c;
    printf("[");
        for ( numero = 2 ; numero <= 5 ; numero++ ){
            printf( "%d,", numero);
            if (numero == 5){
                for ( a = 3 ; a <= 6 ; a++ ){
                    printf( "%d,", a);
                        if (a==6){
                            for ( b = 4 ; b <= 7 ; b++ ){
                                printf( "%d,", b);
                                    if(b==7){
                                        for ( c = 5 ; c <= 8 ; c++ ){
                                            printf( "%d,", c);
                                            }   
                                    }
                            }         
                        }
                }
            }       
        }
    printf("]\n");
    return 0;
}