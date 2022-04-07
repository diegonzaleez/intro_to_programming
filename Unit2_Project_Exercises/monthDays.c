//Made by Diego Enrique Gonzalez Lopez

#include <stdio.h>

int main() 
{
int a,b,c,d;
    for(a=1; a<=12; a++)
    {
        printf("Month %d:\n", a);
        if (a == 2){
        for (b=1; b<=28; b++)
        {
            printf("%d\n", b);
        }    
        }
        else {
            if (a==4 || a==6 || a==9 || a==11){
            for (c=1;c<=30; c++)
            {
            printf("%d\n", c);
        }      
            }
            else{
            for (d=1; d<=31; d++)
            {
            printf("%d\n", d);
        }          
            }
        }
    }
    return 0;
}