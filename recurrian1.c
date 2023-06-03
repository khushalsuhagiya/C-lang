#include<stdio.h>
int new(int n)
{
    printf("%d\n",n);
    if(n<3){
        new(++n);
    }
    printf("%d\n",n);
}
int main()
{
    new(1);
}