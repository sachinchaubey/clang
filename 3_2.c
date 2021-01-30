#include <stdio.h>
int main()
{
int item,mm,dd,yyyy;
float unit_price;
printf("enter item no.:");
scanf("%d", &item);
printf("enter unit price:");
scanf("%f", &unit_price);
printf("enter purchese date(mm/dd/yyyy):");
scanf("%d/%d/%d",&mm,&dd,&yyyy);
printf("ITEM\tUNIT\tPURCHESE\n\tPRICE\tDATE\n%d\t$%.2f\t%d/%d/%d\n",item,unit_price,mm,dd,yyyy);
return 0;
}

