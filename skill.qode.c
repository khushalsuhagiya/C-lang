#include<stdio.h>
int main()
{
    char a[50],b[50];
    int i,j,k;
    printf("a:");
    gets(a);
    printf("b:");
    gets(b);

    for(i=0; a[i]!='\0';i++);
    k=i;
    for(j=0; b[j]!='\0';j++);

    for(i=0;i<=j;i++)
    {
        a[k++]=b[i];
    }
    a[k] = '\0';

    printf("your final string: %s",a);

}