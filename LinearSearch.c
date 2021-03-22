//Author:Arjit Manhas
//Creation Date:22/3/2021
//Last Modification:22/3/2021
//Purpose of the program:Searching an element in an array using linear search
#include <stdio.h>
    int main(){//Main function body
        int array[100], search, c, n;//Variable and data type Declaration

        printf("Enter number of elements in array\n");
        scanf("%d", &n);//Taking user input

        printf("Enter %d integer(s)\n", n);

        for (c = 0; c < n; c++)//Using for loop for increment with c = 0, c < n
            scanf("%d", &array[c]);

        printf("Enter a number to search\n");
            scanf("%d", &search);//Taking user input

        for (c = 0; c < n; c++){
            if (array[c] == search){//If required element is found
                printf("%d is present at location %d.\n", search, c+1);//printing output if req element is found
                break;//Break statement
            } 
        }
        if (c == n)//If required element isn't found
            printf("%d isn't present in the array.\n", search);//printing output if req element isn't found

        return 0;//Return statement
      }
