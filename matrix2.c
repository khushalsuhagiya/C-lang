#include<stdio.h>
int main()
{
    int a[10][10],i,j ,total=0,b=0,c=0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\n a[%d][%d] :",i,j);
            scanf("%d",&a[i][j]);
        } 
    }
   printf("\n\t-------matrix------\n\n");
      for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\t %d",a[i][j]);
        } 
        printf("\n");
    }
     for(i=0;i<3;i++)
     {
         for(j=0;j<3;j++)
         {
            if(i==j)
            {
                total += a[i][j];
            }
             else if(i<j)
            {
                b += a[i][j];
            }
             else
            {
                c += a[i][j];
            }
         }
     }
     printf("\n upper=%d",b);
     printf("\n diagonal=%d",total);
     printf("\n lower=%d",c);
    
}