//Author:Arjit Manhas
//Creation Date:17/3/2021
//Last Modification:17/3/2021
//Purpose of the program:To check Area and Perimeter of Circle, Square and Rectangle
#include <stdio.h> 
int main() {
   float area, perimeter, side, radius, length, breadth;//Declarartion of data type and variables

    perimeter = 2*3.14*radius;//Formula for perimeter of circle 
    scanf("%f = 2*3.14*%f",&radius,perimeter);//Taking user input in float data type
	printf("Perimeter of the Circle = %f\n", perimeter);//Printing the value for perieter of circle
	
	area = 3.14*radius*radius;//Formula for area of circle 
	scanf("%f = 3.14*%f*%f",&radius,area);//Taking user input in float data type
	printf("Area of the Circle = %f\n", area);//Printing the value for area of circle

    perimeter = 4*side;//Formula for perimeter of square 
    scanf("%f = 4*%f",&side,perimeter);//Taking user input in float data type
	printf("Perimeter of the square = %f\n", perimeter);//Printing the value for perieter of sqaure
	
	area = side*side;//Formula for area of square 
	scanf("%f = %f*%f",&side,area);//Taking user input in float data type
	printf("Area of the square = %f\n", area);//Printing the value for area of sqaure

	perimeter = 2*(length+breadth);//Formula for perimeter of rectangle
	scanf("%f = 2*(%f+%f)",&length,&breadth,perimeter);//Taking user input in float data type
	printf("Perimeter of the rectangle = %f\n", perimeter);//Printing the value for perieter of rectangle
	
	area = length*breadth;//Formula for area of rectangle
	scanf("%f = %f*%f",&length,&breadth,area);//Taking user input in float data type
	printf("Area of the rectangle = %f\n", area);//Printing the value for area of rectangle

	return(0);
}
