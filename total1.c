#include<stdio.h>
#define n 5
   int dis(int a[ ])
{
  for(int i=0;i<n;i++)
{
  if(i==0)
printf("%d \n",a[i]);
else
printf("%d\t %d\n",a[i],a[i]+a[i-1]);
}
}
int main()
{
int arr[n],i;
for(i=0;i<n;i++)
{
   printf("entar a[%d]:",i);
   scanf("%d",&arr[i]);
}
dis(arr);
}