#include<stdio.h>
int per()
{
    int i, a, j=0;
    printf("Enter: ");
    scanf("%d",&a);
    for(i=1;i<a;i++)
    {
        if(a%i==0){
            printf(" %d",i);
            j=j+i;
        }
    }
    if(a==j)
    {
        printf("\nperfect:");
    }
    else{
        printf("\nimperfect:");
    }
}
int main()
{
    per();
}