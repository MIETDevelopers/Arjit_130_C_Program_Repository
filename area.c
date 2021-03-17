//Author:Arjit Manhas
//Creation Date:17/3/2021
//Last Modification:17/3/2021
//Purpose of the program:To check Area and Perimeter of Circle, Square and Rectangle
#include <stdio.h> 
int main() {
   float area, perimeter, side, radius, length, breadth;

    perimeter = 2*3.14*radius;
    scanf("%f = 2*3.14*%f",&radius,perimeter);
    printf("Perimeter of the Circle = %f\n", perimeter);
	
	area = 3.14*radius*radius;
	scanf("%f = 3.14*%f*%f",&radius,area);
	printf("Area of the Circle = %f\n", area);

    perimeter = 4*side;
    scanf("%f = 4*%f",&side,perimeter);
	printf("Perimeter of the square = %f\n", perimeter);
	
	area = side*side;
	scanf("%f = %f*%f",&side,area);
	printf("Area of the square = %f\n", area);

	perimeter = 2*(length+breadth);
	scanf("%f = 2*(%f+%f)",&length,&breadth,perimeter);
	printf("Perimeter of the rectangle = %f\n", perimeter);
	
	area = length*breadth;
	scanf("%f = %f*%f",&length,&breadth,area);
	printf("Area of the rectangle = %f\n", area);

	return(0);
}