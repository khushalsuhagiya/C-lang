#include<stdio.h>
int main()
{
    int i=1,j,z=11;
do
{
j=1;
do
   {
   printf("\t %d",z++);
   j++;
}
  
  while(j<=5);
   z+=5;
   printf("\n");
   i++;
}
while(i<=5);
}