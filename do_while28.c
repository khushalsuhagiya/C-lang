#include<stdio.h>
int main()
{
    int a=1,c=11;
    do
    {
        int b=1;
        do 
        {
            printf("\t%d",c);
            c++;
            b++;
        }while(b<=a);
        c+=5;
        printf("\n");
        a++;
    }while(a<=5);
}