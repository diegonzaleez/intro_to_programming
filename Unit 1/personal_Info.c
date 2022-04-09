//Made by Diego Enrique Gonzalez Lopez

#include <stdio.h>

char firstName[255];
char lastName[255];
char yearsOld [255];
char sTate[255];

int main() {
  printf("Enter your first name:");
  scanf("%s",firstName);
  printf("Enter your last name:");
  scanf("%s",lastName);
  printf("Enter your age:");
  scanf("%s",yearsOld);
  printf("Enter your state:");
  scanf("%s",sTate);
  
  printf("Your credentials are:");
  printf("%s\n",firstName);
  printf("%s\n",lastName);
  printf("%s\n",yearsOld);
  printf("%s\n",sTate);
  return 0;
}