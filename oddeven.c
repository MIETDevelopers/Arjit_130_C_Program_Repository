//Author:Arjit Manhas
//Creation Date:18/3/2021
//Last Modification:18/3/2021
//Purpose Of The Program: To Determine Whether The Entered Number Is Even or Odd
#include <stdio.h>
int main(){//Main Function Body 
    
    int num;//Data type and Variable Declaration
    
    printf("Enter an integer: ");//Print Function Calling
    
    scanf("%d", &num);//Taking user input in integer data type
	//Using If Else condition
    if(num % 2 == 0)
    
        printf("%d is even.", num);//Print Function Calling
    else
        printf("%d is odd.", num);//Print Function Calling
    
    return 0;
}
