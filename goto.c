#include<stdio.h>
int main()
{
    int i,j;
    i=5;
    row:
     if (i>=1)
     {
        printf("\n",i--);
        j=0;
        col:
        if(j<=i)
        {
            printf(" *",j++);
            printf(" ");
            goto col;
        }
        goto row;
        }
        return 0;
}


