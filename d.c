x#include<stdio.h>
int main()
{
int cash,$20,$10,$5,$1;
printf("enter the cash");
scanf("%d",&cash);
$20=cash/20;
cash=cash%20;
printf("%d\n",$20);
$10=cash/10;
cash=cash%10;
printf("%d\n",$10);
$5=cash/5;
cash=cash%5;
printf("%d\n",$5);
$1=cash/1;
cash=cash%1;
printf("%d\n",$1);
return 0;
}


