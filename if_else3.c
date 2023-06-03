#include<stdio.h>
int main()
{
    int a,b;
    printf("enter a :");
    scanf("%d",&a);

    printf("enter b :");
    scanf("%d",&b);

    if(a<b)
    {
        printf("small %d",a);
    }
    else
    {
        printf("small %d",b);
    }
}

// ans
// enter a :65
// enter b :90
// small 65