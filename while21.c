#include<stdio.h>
int main()
{
    int a=5,b;
    while( a >= 1)
    {
        b= a;
        while( b >= 1)
        {
            printf("\t%d",a);
            b--;
        }
            printf("\n"); 
            a--;       
    } 
}