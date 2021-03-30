<<<<<<< HEAD
//Author: Arjit manhas
//Creation Date:29/3/2021
//Last Modification:29/3/2021
//Purpose Of The Program:to read a file
#include <stdio.h>
#include <stdlib.h>

int main()
{
   char cha[100];
   FILE *fptr;//declaraing a file type variable
   if ((fptr = fopen("./txt.txt","r")) == NULL)//opening file in read mode
   {
       printf("Error! opening file");
       exit(1);
   }

   fscanf(fptr, "%[^\n]", cha);
   printf("%s", cha);
   fclose(fptr); 
  
   return 0;
=======
//Author: Arjit manhas
//Creation Date:29/3/2021
//Last Modification:29/3/2021
//Purpose Of The Program:to read a file
#include <stdio.h>
#include <stdlib.h>

int main()
{
   char cha[100];
   FILE *fptr;//declaraing a file type variable
   if ((fptr = fopen("./txt.txt","r")) == NULL)//opening file in read mode
   {
       printf("Error! opening file");
       exit(1);
   }

   fscanf(fptr, "%[^\n]", cha);
   printf("%s", cha);
   fclose(fptr); 
  
   return 0;
>>>>>>> 09c92c853b14b712be994f159b5d29af080cec4f
}