#include<stdio.h>
int main()
{
    char ch = 'A';
    int a=1;
    while ( a <= 5)
    {
        int b=1;
        while( b <= a)
        {
            printf("\t%c",ch);
            ch+=1;
            b++;
        }
        printf("\n");
        a++;
    }
}