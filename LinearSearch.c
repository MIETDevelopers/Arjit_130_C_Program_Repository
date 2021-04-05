//Author:Arjit Manhas
//Creation Date:22/3/2021
//Last Modification:22/3/2021
//Purpose of the program:Searching an element in an array using linear search
#include<stdio.h>
  
int main()
{
    int a[20],i,x,n;
    printf("How many elements?");
    scanf("%d",&n);
     
    printf("\nEnter array elements:n");
    for(i=0;i<n;++i)
        scanf("%d",&a[i]);
     
    printf("\nnEnter element to search:");
    scanf("%d",&x);
     
    for(i=0;i<n;++i)
        if(a[i]==x)
            break;
     
    if(i<n)
        printf("\nElement found at index %d",i);
    else
        printf("\nElement not found");
  
    return 0;
}
