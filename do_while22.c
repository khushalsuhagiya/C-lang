#include<stdio.h>
int main()
{
    int a=1,b;
    do
    {
        b=1;
        do
        {
            printf("\t%d",b);
            b++;
        }while(b<=a);
            printf("\n",a);
            a++;        
    }while(a<=5);  
}