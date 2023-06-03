#include<stdio.h>
int main()
{
    int a=1,c=1;
    do 
    {
        int b=1;
        do 
        {
            printf("\t%d",c);
            c+=1;
            b++;
        }while(b<=a);
        printf("\n");
        a++;
    }while(a<=5);
}