// take a number,and print its multiplication table uo to 10. 
#include<stdio.h>
int main()
{
     int a;

     printf("value a: ");
     scanf("%d",&a);


     printf(" %d * 1=%d",a,a*1);
     printf("\n %d * 3=%d",a,a*3);
     printf("\n %d * 2=%d",a,a*2);
     printf("\n %d * 4=%d",a,a*4);
     printf("\n %d * 5=%d",a,a*5);
     printf("\n %d * 6=%d",a,a*6);
     printf("\n %d * 7=%d",a,a*7);
     printf("\n %d * 8=%d",a,a*8);
     printf("\n %d * 9=%d",a,a*9);
     printf("\n %d *10=%d",a,a*10);

     return 0;
}

/*
value a: 33
 33 * 1=33
 33 * 3=99
 33 * 2=66
 33 * 4=132
 33 * 5=165
 33 * 6=198
 33 * 7=231
 33 * 8=264
 33 * 9=297
 33 *10=330
*/