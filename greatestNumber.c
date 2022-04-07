//Made by Diego Enrique Gonzalez Lopez

#include <stdio.h>
  
int main()
{
    int x, y, z;
  
    printf("Enter the values of x, y and z: ");
    scanf("%d %d %d", &x, &y, &z);
  
    if (x >= y && x >= z)
        printf("%d is the largest number.", x);
  
    if (y >= z && y >= z)
        printf("%d is the largest number.", y);
  
    if (z >= x && z >= y)
        printf("%d is the largest number.", z);
  
    return 0;
}