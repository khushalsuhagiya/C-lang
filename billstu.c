#include<stdio.h>
struct bill
{
    int productno,price,qty,rate,dis,ratead,gst,billamt;
    char productname[50];
};

int main()
{
    struct bill a[10];
    int i;
    printf("enter data:------------------\n");
    for (i=0; i<5; i++)
    {
        printf("enter productno:");
        scanf("%d",&a[i].productno);
        printf("enter productname:");
        scanf("%s",&a[i].productname);
        printf("enter price:");
        scanf("%d",&a[i].price);
        printf("enter qty:");
        scanf("%d",&a[i].qty);
    }
    printf("pno\tpname\tprice\tqty\trate\tdis\trated\tgst\tbillamt");
    for (i=0;i<5;i++)
    {
        a[i].rate = a[i].price * a[i].qty;
        a[i].dis =  a[i].rate*0.10;
        a[i].ratead =a[i].rate - a[i].dis;
        a[i].gst =a[i].ratead*0.18;
        a[i].billamt = a[i].ratead + a[i].gst;

        printf("\n%d\t%s\t%d\t%d\t%d\t%d\t%d\t%d\t%d",a[i].productno,a[i].productname,a[i].price,a[i].qty,a[i].rate,a[i].dis,a[i].ratead ,a[i].gst ,a[i].billamt);
    } 
}