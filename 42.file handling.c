#include <stdlib.h>
#include <stdio.h>

int main()
{
   int num;
   FILE *fptr1, *fptr2;

   fptr1 = fopen("helloF1.txt","r");
   fptr2 = fopen("helloF2.txt","w");

   if(fptr1 == NULL || fptr2 == NULL )
   {
      printf("Error!");   
      exit(1);             
   }

   printf("Lets see the value available in file:");
   fscanf(fptr1,"%d",&num);

   printf("%d",num);
   fprintf(fptr2,"%d",num);
   
   fclose(fptr1);
   fclose(fptr2);

   return 0;
}
