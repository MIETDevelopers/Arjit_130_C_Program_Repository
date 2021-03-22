//Author:Arjit Manhas
//Creation Date:22/3/2021
//Last Modification:22/3/2021
//Purpose of the program:Sorting an array using insertion sort
#include<stdio.h>
    int main(){
        int n, i, j, temp;//Data type and Variable declaration
        int arr[64];//Declaring a array 
        //This will determine the limit of values according to user input.
        printf("Enter number of elements\n");
        scanf("%d", &n);//Taking user input in int data type
 
        printf("Enter %d integers\n", n);
        for (i = 0; i < n; i++){//Using for loop for increment with i = 0
            scanf("%d", &arr[i]);//Taking user input
        }
        for (i = 1 ; i <= n - 1; i++){ //Using for loop.
	        j = i;
                while ( j > 0 && arr[j-1] > arr[j]){
                //Swapping of function       
                temp     = arr[j];
                arr[j]   = arr[j-1];
                arr[j-1] = temp;
                j--;
            }
        }
        printf("Sorted list in ascending order:\n");
        for (i = 0; i <= n - 1; i++){
            printf("%d\n", arr[i]);
        }
        return 0;//Return statement
    }