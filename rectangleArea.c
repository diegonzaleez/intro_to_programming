//Made by Diego Enrique Gonzalez Lopez

#include <stdio.h> 

int width;          
int height;    
int area;               

int main() {
	

	printf("Enter the value of width\n");
	scanf("%d", &width);
	
	printf("Enter the value of height\n");
	scanf("%d", &height);

	area = width * height;

	printf("Area of the rectangle = %d area square cm\n", area);

	if (width == height){
		printf("The figure is a square");
	};
	

return(0);
}