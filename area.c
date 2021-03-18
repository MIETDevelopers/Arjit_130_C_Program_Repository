
//Author:Arjit Manhas
//Creation Date:17/3/2021
//Last Modification:17/3/2021
//Purpose of the program:To check Area and Perimeter of Circle, Square and Rectangle
#include <stdio.h>
	int main(){
		//Declarartion of data type and variables
		float length=2,breadth=2,radius=4,side=3,areaOfRect=length*breadth,PerimeterOfRect=2*(length+breadth),areaOfCircle=3.14*radius*radius,PerimeterOfCircle=2*3.14*radius,areaOfSquare=side*side,PerimeterOfSquare=4*side;
		
		printf("area of Rectangle=%f\n",areaOfRect);//Printing the value for area of rectangle
		printf("Perimeter of Rectangle=%f\n",PerimeterOfRect);//Printing the value for perimeter of rectangle
		printf("area of Circle=%f\n",areaOfCircle);//Printing the value for area of circle
		printf("Perimeter of Circle=%f\n",PerimeterOfCircle);//Printing the value for perimeter of circle
		printf("area of Square=%f\n",areaOfSquare);//Printing the value for area of sqaure
		printf("Perimeter of Square=%f\n",PerimeterOfSquare);//Printing the value for perimeter of sqaure

		return 0;
}