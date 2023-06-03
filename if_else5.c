#include<stdio.h>
int main()
{
    int a, b, c;
    printf(" first: ");
    scanf("%d", &a);

    printf(" second: ");
    scanf("%d", &b);
    c=a*b;

    printf(" %d",c);

    if(c%21==0)
    {
        printf("yes 3 and 7");
    }
    else
    {
        printf("not 3 and 7");
    }
}

// ans

//  first value : 10
//  second value : 20

//  not 3 and 7
// --------------------------------
// first value : 14
//  second value : 21

//  294yes 3 and 7