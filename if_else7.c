#include<stdio.h>
int main()
{
    int a,b,c,d;

    printf("value :");
    scanf("%d",&a);

    printf("value :");
    scanf("%d",&b);

    c=a*b;
    d=a+b;

    if(c%d==0)
    {
        printf("yes %d",c);
    }
    else
    {
        printf("no %d",d);
    }
}