#include<stdio.h>
int main()
{
    char a[50],b[50];
    int i,j,k;
    printf("enter :");
    gets(a);

  for(i=0; a[i]!='\0';i++){
    
  }
  k=i;
    for (j = 0;j < k; j++)
    {
        b[j]=a[--i];
    }
    b[j]='\0';

    printf("%s",b);
    
   
}