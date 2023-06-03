#include<stdio.h>
int main()
{

    int n;

    printf("enter n: ");
    scanf("%d",&n);

    do
    {
        printf("\n hello %d",n);
        n--;
    }while( n>=1);



}