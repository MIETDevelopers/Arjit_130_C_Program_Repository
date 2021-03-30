//Author: Arjit manhas
//Creation Date:21/3/2021
//Last Modification:22/3/2021
//Purpose Of The Program:A C Program to print factorial using recursion.	 			
#include<stdio.h>
        //Main Function Body
    	long int multiplyNumbers(int n);//Data and Variable Declaration
    	int main(){
    	
        	int n;//Data type and Variable Declaration
        	printf("Enter a positive integer: ");		
        	scanf("%d",&n);//Taking user Input
        	printf("Factorial of %d = %ld", n, multiplyNumbers(n));//Printing output
        	return 0;		
    	}

    	long int multiplyNumbers(int n) {
        	if (n>=1)
            	return n*multiplyNumbers(n-1);
        	else
            	return 1;
        }