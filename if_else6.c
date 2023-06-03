#include<stdio.h>
int main()
{
    int i;
    printf("value :");
    scanf("%d",&i);

    if(i%15==0)
    {
        printf("value yes",i);
    }
    else
    {
        printf("value no",i);
    }
}

// ans

// value :43
// value no

// value :15
// value yes