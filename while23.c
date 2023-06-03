#include<stdio.h>
int main()
{
    char a='A';
    while(a <= 'E')
    {
        char b='A';
        while(b <= a)
        {
            printf("\t%c",a);
            b++;
        }
            printf("\n");
            a++;        
    }
    return 0;
}