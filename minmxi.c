#include<stdio.h>
#define n 5
int display(int arr[]){
	int i,min,max;
	min=arr[0];
    max=arr[0];
	for (i=1; i<n; i++)
	{
		if (arr[i]<min)
		min=arr[i];
		if (arr[i]>max)
		max=arr[i];	
	}
	printf("minimum number is:%d\n",min);
	printf("maximum number is:%d",max);
}
int main()
{
	int arr[5],i;
	printf("enter number:");
	for (i=0; i<n; i++)
	{
		scanf("%d",&arr[i]);
	}
	display(arr);
	
}