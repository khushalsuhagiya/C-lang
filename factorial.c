#include<stdio.h>
int new(int n)
{
    printf("%d\n",n);
    if(n==1)
        return 1;
    else
        return n*new(n-1);
}
int main()
{
    int x=new(5);

    printf("%d",x);


}