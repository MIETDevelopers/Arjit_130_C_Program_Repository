<<<<<<< HEAD
#include <stdio.h>

int main()
{
    int a;  
    a = 10;
    int *p = &a;     // declaring and initializing the pointer

    //prints the value of 'a'
    printf("%d\n", *p);  
    printf("%d\n", *&a);  
    //prints the address of 'a'
    printf("%u\n", &a);    
    printf("%u\n", p);     
    
    printf("%u\n", &p);    //prints address of 'p'
    
    return 0;
}
=======

//Author: Arjit manhas
//Creation Date:22/3/2021
//Last Modification:22/3/2021
//Purpose of the program : pointer variable initialization with the address of another variable and then prints normal variable value and its address using pointer variable
#include <stdio.h>

int main()
{
    int a;  
    a = 10;
    int *p = &a;     // declaring and initializing the pointer

    //prints the value of 'a'
    printf("%d\n", *p);  
    printf("%d\n", *&a);  
    //prints the address of 'a'
    printf("%u\n", &a);    
    printf("%u\n", p);     
    
    printf("%u\n", &p);    //prints address of 'p'
    
    return 0;
}
>>>>>>> 45e12f6780d1aaa61cdf4fedd1c4efeef0529923
