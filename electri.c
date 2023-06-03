#include <stdio.h>
int main()
 {
    
    float unit,amount;

    printf("Enter number of unit = ");
    scanf("%f",&unit);

     if (unit <= 100)
 {
      amount=50+(unit*0.6);
  }
      else if (unit >101 && unit<=300)
 {
      amount=110+((unit-100)*0.8);
 }
    else
 {
      printf("\n unit > 101 && unit<=300 \n");
     amount=50+60+160+((unit-300)*0.9);
 }
     if (amount >=301)
 {
     amount=amount*1.15;
 }
     printf("your amountbill is=%f",amount);
     return 0;
 }