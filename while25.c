#include<stdio.h>
int main()
{
    int a=1;
    while( a <= 10)
    {
        int b=1;
        while( b <= a)
        {
            printf("\t%d",a);
            b+=2;
        }
            printf("\n");
            a+=2;        
    }
}