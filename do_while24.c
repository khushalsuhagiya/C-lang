#include<stdio.h>
int main()
{
    int a=2;
    do 
    {
        int b=2;
        do
        {
            printf("\t%d",a);
            b+=2;
        }while(b<=a);
            printf("\n");
            a+=2;        
    }while(a<=10); 
}