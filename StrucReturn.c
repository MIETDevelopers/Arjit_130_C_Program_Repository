
//Author:Arjit Manhas
//Creation Date:18/3/2021
//Last Modification:18/3/2021
//Purpose of the program:function implementation which returns a structure
#include <stdio.h>

struct a {
   int i;
};

struct a f(struct a x)
{
   struct a r = x;
   return r;
}

int main(void)
{
   struct a x = { 12 };
   struct a y = f(x);
   printf("%d\n", y.i);
   return 0;
}