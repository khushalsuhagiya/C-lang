#include<stdio.h>
int main()
{	
  char b='a';
  int i,j;
 for(i=1;i<=5;i++)
  {
  for(j=1;j<=5;j++)
     {
     printf("\t %c",b);
     b+=1;
     }
   printf("\n");
  }
return 0;
}