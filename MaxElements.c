//Author:Arjit Manhas
//Creation Date:20/3/2021
//Last Modification:22/3/2021
//Purpose of the program:To find max element and index in array
#include<stdio.h>
	int main(){//Main fucntion body

		int i;//Data type and Variable declaration
		float arr[5];//Declaring a array arr of float data type and size 5 

		printf("Please enter five numbers:\n ");

		for (i = 0; i < 5; ++i){//Using For loop for increment with i = 0, i < 5

			scanf("%f", &arr[i]);//Taking user input in float data type
		}

		for (i = 1; i < 5; ++i){//Using another For loop for increment this time with i = 1, i < 5
    		if (arr[0] < arr[i])//If statement, determining the largest value
        		arr[0] = arr[i];
		}
		printf("Largest element = %.2f", arr[0]);//Printing the largest value

		return 0;//Return statement
		}