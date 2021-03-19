//Author:Arjit Manhas
//Creation Date:18/03/2021
//Last Modification:19/03/2021
//Purpose Of The Program: To Print The Fibonacci Series
#include <stdio.h>
    int main(){//Main Function Body
        int i, n, t1 = 0, t2 = 1, nextTerm;//Data Type and Variable Declaration
        printf("Enter the number of terms: ");
        scanf("%d", &n);//Taking user input 
        printf("Fibonacci Series: ");

        for (i = 1; i <= n; ++i){//Using for Loop for increment with i=1
            printf("%d, ", t1);//Print Function Calling

            //Variable Initialising
            nextTerm = t1 + t2;	
            t1 = t2;			
            t2 = nextTerm;		
        }
    return 0;//Return Statement
<<<<<<< HEAD
    }
=======
    }
>>>>>>> a7ec218788eb2ad0e34ae9925178219a3cbbf4be
