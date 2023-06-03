#include<stdio.h>
int main()
{
    int a[10];
    int i,total=0;
     for(i=0;i<10;i++)
    {
        printf("enter a[%d]:",i+1);
        scanf("%d",&a[i]);
    }
    printf("array--------------------");
     for(i=0;i<10;i++){
        if(a[i]%2==0){
        printf("\n %d",a[i]);
        }
     }
     printf("\ntotal");
    for(i=0;i<10;i++)
    { if(a[i]%2==0)
        total=total+a[i];
    }    
    printf("\n:%d\n",total);
}