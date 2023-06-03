 #include<stdio.h>
int main()
{	
  int i=2,j;
 do
{
 j=2;
 do
{
 printf("\t %d",i);
 j+=2;
 }
 while (j<=10);
 printf("\n");
 i+=2;
 }
while(i<=10);
}