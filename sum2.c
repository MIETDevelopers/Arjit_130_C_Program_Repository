//Author:Arjit Manhas
//Creation Date:17/3/2021
//Last Modification:17/3/2021
//Purpose of the program:To check the sum of two numbers 
#include<stdio.h>

int main(){

	int a, b, sum;//Declaration of variables and data type 
	printf("\n enter numbers: ");
	scanf("%d %d", &a, &b);//Taking user input in int data type
	sum = a+b;//Formula for sum of two numbers
	printf("sum : %d", sum);//Print f function calling
	return 0;
}
