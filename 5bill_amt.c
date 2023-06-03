#include<stdio.h>
int main()
{
    int productname[5],price[5],qty[5],rate[5],dis[5],ratead[5],gst[5],billamt[5];
    int i,a=0,b=0,c=0;
    for (i=0; i<5; i++)
    {
        printf("productname %d:",i+1);
        scanf("%d",&productname[i]);
    }
     for (i=0; i<5; i++)
    {
        printf("price %d:",i+1);
        scanf("%d",&price[i]);
    }
     for (i=0; i<5; i++)
    {
        printf("qty%d:",i+1);
        scanf("%d",&qty[i]);
    }
    for (i=0; i<5; i++)
    {
        printf("rate%d:",i+1);
       
    }
    {
        printf("dis%d:",i+1);
       
    }
    {
        printf("ratead%d:",i+1);
       
    }
     {
        printf("gst%d:",i+1);
       
    }
    printf("\n------------array is------------\n");
    printf("\nproductname \tprice   qty  \t rate \t dis \tratead \t gst \tbillamt");
    for (i = 0; i < 5; i++) {
    printf("\n %d", productname[i]);
    printf("\t\t%d", price[i]);
    printf("\t %d", qty[i]);

    rate[i]=price[i]*qty[i];
    printf("\t %d", rate[i]);

    dis[i]=rate[i]*0.10;
    printf("\t %d", dis[i]);

    ratead[i]=rate[i] - dis[i];
    printf("\t %d", ratead[i]);

    gst[i]=ratead[i] * 0.18;
    printf("\t %d", gst[i]);

     billamt[i]=ratead[i] + gst[i];
    printf("\t %d", billamt[i]);
    }
    for(i=0;i<5;i++)
    {
          a=a+dis[i];
    }
    printf("\n\n\t \t \t \t \t %d",a);
    for (i=0;i<5;i++)
    {
        b=b+gst[i];
    }
    printf("\t \t %d",b);
     for (i=0;i<5;i++)
    {
        c=c+billamt[i];
    }
    printf("\t %d",c);
    
}