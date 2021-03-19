//Author:Arjit Manhas
//Creation Date:20/2/2021
//Last Modification:19/3/2021
//Purpose of the program:To check whether number input by user is prime or not
#include<stdio.h>

int main(){//main function body

	int n,i, count=0;//Declearation of data type for variables n and i 

	printf("enter value of n\n"); //Printing output=enter value of n 

	scanf("%d",&n);//Taking user input in integer data type
	
	for(i=1;i<=n;i++){//Using for loop for increment with i=1

		if(n%i==0){//If statement when remainder is zero
			
			count=count+1;//Result of if statement
		}
	}
	if(count==2){//If statement when count of variable n is 2 

		printf("%d is prime",n);//Print output n is prime 
	}
	else

		printf("%d is not prime",n);//Print output n is not prime

	return 0;
}
