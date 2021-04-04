<<<<<<< HEAD
//Author: Arjit manhas
//Creation Date:21/3/2021
//Last Modification:22/3/2021
//Purpose Of The Program:Multiplication Of Matrices
#include<stdio.h>     
	int main(){		//Main Function Body

		int a[3][3],b[3][3],mul[3][3],r,c,i,j,k;//Data, Variable and Array Declaration and Initialisation     
		printf("enter the number of row=");  
		scanf("%d",&r);//Input Function
		printf("enter the number of column=");  	  
		scanf("%d",&c);//Input Function
		printf("enter the first matrix element=\n");   
		for(i=0;i<r;i++){//Using Nested For Loop
			for(j=0;j<c;j++){
				scanf("%d",&a[i][j]);//Taking user input    
			}    
		}    
		printf("enter the second matrix element=\n");    
		for(i=0;i<r;i++){   
			for(j=0;j<c;j++){   
				scanf("%d",&b[i][j]);    				
			}	    
		}	    
	    printf("multiply of the matrix=\n");    
		for(i=0;i<r;i++){    
			for(j=0;j<c;j++){    //Multiplication Using for loop
				mul[i][j]=0;    
				for(k=0;k<c;k++){    
					mul[i][j]+=a[i][k]*b[k][j];    
				}    
			}    
		}    
		//For printing result    
		for(i=0;i<r;i++){    	    
			for(j=0;j<c;j++)    
			{    
				printf("%d\t",mul[i][j]);    
			}	    
			printf("\n");    
		}    	
		return 0;  //Return Statement
	}
