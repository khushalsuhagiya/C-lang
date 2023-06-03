#include<stdio.h>
int main()
{
    char a[50];
    int i,j,k;
    printf("enter :");
    gets(a);

    for(i=0;a[i]!='\0';i++);
    k=i-1;
      for (j=0;j<i/2;j++)
      printf("%c%c",a[j],a[k-j]);

      if (i%2!=0)
      {
        printf("%c",a[i/2]);
      }
    
}