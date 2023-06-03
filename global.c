#include<stdio.h>
int maths,sci,eng,total,grad;
float percentage;
void per()
{
    if (maths<33 || sci<33 || eng<33)
    {
         printf("\tfail");
    }
    
    else if(percentage>=75)
    {
        printf("\t a");
    }
    else if(percentage>=60 && percentage<=75)
    {
        printf("\t b");
    }
    else if(percentage>=45 && percentage<=60)
    {
        printf("\t c");
    }
    else if(percentage>=35 && percentage<=45)
    {
        printf("\t d");
    }
   
}
void display()
{
    printf("maths \tsci \teng \ttotal \tper \tgrad\n");
    printf("%d \t%d \t%d \t%d \t%.2f ",maths,sci,eng,total,percentage);
}
void calc()
{
    total= maths+sci+eng;
    percentage=(float)total/3;
}
void setdata()
{
    printf("enter maths marks:");
    scanf("%d",&maths);
    printf("enter sci marks:");
    scanf("%d",&sci);
    printf("enter eng marks:");
    scanf("%d",&eng);
}
int main()
{
    setdata();
    calc();
    display();
    per();
}
