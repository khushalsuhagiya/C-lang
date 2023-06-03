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
        printf("\n a[%d]:%d",i+1,a[i]);
     }
     printf("\ntotal");
    for(i=0;i<10;i++)
    {
        total=total+a[i];
    }    
    printf("\n:%d\n",total);
}
























// #include<stdio.h>
// int main()
// {
//     int a[10],total=0;
//     int i;
//     for (i=0;i<10; i++)
//     {
//        printf("enter a[%d]:",i+1);
//        scanf("%d",&a[i]);
//     }
//      printf("\n-----------array is----------\n");
//     for (i=0; i<10; i++)
//     {
//         printf("\n a[%d]:%d",i+1,a[i]);
//     }
//     printf("\n all element total:");
//      for (i=0; i<10;i++)
//      { 
//         total=total+a[i];
//      }  
//      printf("%d",total);
// }