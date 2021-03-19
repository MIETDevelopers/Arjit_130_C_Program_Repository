//Author:Arjit Manhas
//Creation Date:18/03/2021
//Last Modification:19/03/2021
//Purpose Of The Program: To Determine The Maximum of N numbers Using 'For' Loop
#include<stdio.h>
	int main(){//Main function Body 
		int i; //Variable and data type declaration
		float arr[10]; //Declaring an Array with float data type 

		printf("Please enter ten numbers:\n"); 		

		for (i = 0; i < 10; ++i){//Using For Loop for increment with i=0
    	scanf("%f", &arr[i]);{//Taking user Input 

		for (i = 1; i < 10; ++i){//Storing Largest N number in arr[0] using Nested Loop
    	if (arr[0] < arr[i])
        	arr[0] = arr[i];
		}
		printf("Largest element = %.2f", arr[0]);//Printf Function Calling   

		return 0;		

	} 