<<<<<<< HEAD
//Author: Arjit manhas
//Creation Date:21/3/2021
//Last Modification:22/3/2021
//Purpose Of The Program:A C Program to swap two numbers using call by refrence
#include <stdio.h>
    //Main Function Body
   void swap(int*, int*);
    
      int main(){
      
         int x, y;//Data type and Variable Declaration
       
         printf("Enter the value of x and y\n");//Print Function Calling
         scanf("%d%d",&x,&y);//Taking user /Input 
       
         printf("Before Swapping\nx = %d\ny = %d\n", x, y);//Print Function Calling
       
         swap(&x, &y);//Using Swap Function Call by Refrence
       
         printf("After Swapping\nx = %d\ny = %d\n", x, y);//Print Function calling
       
         return 0;
      }
       //Function Definition
      void swap(int *a, int *b){
      
         int temp;
         //Function swapping 
         temp = *b;
         *b = *a;
         *a = temp;   
      }
      
