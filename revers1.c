#include<stdio.h>
int fun()
{
    char a[5],b[5];
    int i,j,k;
    printf("enter :");
    gets(a);

  for(i=0; a[i]!='\0';i++){
  k=i;
  }
    for(j = 0;j<k; j++)
    {

        b[j]=a[--i];
    }
    b[j]='\0';

    printf("%s",b);  
}
int main()
{
    fun();
}