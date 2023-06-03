#include<stdio.h>
int main()
{	
  char i='A',j;
 while(i<='E')
{
j='A';
while(j<='E')
{
 printf("\t %c",i);
 j++;
 }
 printf("\n");
 i--;
  }
}