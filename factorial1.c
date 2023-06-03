#include<stdio.h>
int new(int n)
{
   if(n==0)
        return 0;
    else if(n==1)
     return 1;
    else
     return new(n-1)+new(n-2);
    
}
int main()
{
   int i;
   for (i=1; i<=15; i++)
   {
        printf(" %d",new(i));
   }  
}
//output:-
//1 1 2 3 5 8 13 21 34 55 89 144 233 377 610


