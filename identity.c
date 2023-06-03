#include<stdio.h>
int main()
{
   
    int a[10][10],i,j;

       for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i==j)
            {
                printf("%d ",1);
            }
            else{
                printf("%d ",0);
            }
            
        } 
        printf("\n");
    }
}
// output

// 1 0 0 
// 0 1 0
// 0 0 1

