#include<stdio.h>
int main()
{
    int ks,ss,dd;
    
    printf("value :");
    scanf("%d",&ks);

    printf("value :");
    scanf("%d",&ss);

    printf("value :");
    scanf("%d",&dd);

    if(ks>ss && ks>dd)
       {
        printf("value %d",ks);
       }
         else if(dd>ss)   
        {
            printf("value %d",dd);
        } 
         else
        {
            printf("value %d",ss);
        }
    

}
// ans

// value :23
// value :34
// value :9
// value 34

// ans 

// value :23
// value :45
// value :22
// value 45