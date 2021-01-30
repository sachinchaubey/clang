#include <stdio.h>

int main()
{
float amt,rate,mp;
printf("\n Enter the amount ");
scanf("%f", &amt);
printf("\n Enter the rate ");
scanf("%f", &rate);
printf("\n Enter the monthly installment ");
scanf("%f", &mp);
amt=amt+(amt*(rate/1200))-mp;
printf("B.r. after first payment: %.2f\n", amt);
amt=amt+(amt*(rate/1200))-mp;
printf("B.r. after second payment: %.2f\n", amt);
amt=amt+(amt*(rate/1200))-mp;
printf("B.r. after third  payment: %.2f\n", amt);
return 0;
}
