#include <stdio.h>



int main()
{
  float trade, commission;
   printf("Enter the trade value :");
   scanf(" %f",&trade);
  while (trade !=0)
  {
   if (trade>0 && trade<2500)
    {
      commission=30+(1.7*trade/(100.0));
    }
   else if (trade>=2500 && trade<6250)
    {
      commission=56+(0.66*trade/(100.0));
    }
   else if (trade>=6250 && trade<20000)
    {
      commission=76+(0.34*trade/(100.0));
    }
   else if (trade>=20000 && trade<50000)
    {
      commission=100+(0.22*trade/(100.0));
    }
   else if (trade>=50000 && trade<500000)
    {
      commission=155+(0.11*trade/(100.0));
    }
   else if (trade>500000 )
    {
      commission=255+(0.09*trade/(100.0));
    }
   if(commission<39)
    {
     commission=39;
    }
   printf(" commission :$%.2f\n", commission);
   printf("Enter the trade value:");
   scanf("%f",&trade);
  }
 }
