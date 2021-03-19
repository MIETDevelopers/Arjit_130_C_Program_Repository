//Author:Arjit Manhas
//Creation Date:19/03/2021
//Last Modification:19/03/2021
//Purpose Of The Program: To Find The Sum Of Digits Of Number In C
#include <stdio.h>
	int main(){//Main Function Body
		int num,temp, sum = 0, remainder;//Variable and data type declaration

		printf("Enter an integer: \n");
   		scanf("%d", &num);//Taking user input 

   		temp = num;//Variable Initialisation
   		//Using While To Determine The Sum of Digits Of Numbers
   		while (temp != 0){
      		remainder = temp % 10;
      		sum = sum + remainder;
      		temp = temp / 10;
   		}

    	printf("Sum of digits of %d = %d\n", num, sum);//Print Function Calling

    	return 0;//Return Satement
<<<<<<< HEAD
	}
=======
	}
>>>>>>> a7ec218788eb2ad0e34ae9925178219a3cbbf4be
