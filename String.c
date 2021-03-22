//Author: Arjit manhas
//Creation Date:21/3/2021
//Last Modification:22/3/2021
//Purpose Of The Program:To read the string and give it as output. 			
#include <stdio.h>
	int main(){//Main Function Body

	    char name[20];//Data and Array Declaration and Initialisation
	   	printf("Enter name: \n");	
	    scanf("%s", &name); //Taking Input 
	    
	    printf("Your name is %s.", name); //Printing output
	    return 0;//Return statement
	}