#include <stdio.h>
int main()
{
 int n1,n2,n3,n4,n5,n6,n7,n8,n9,n10,n11,first_sum,second_sum,total;
 printf(" Enter the first (single) digit =");
 scanf("%1d", &n1);


 printf(" Enter the firt group of five digits =");
 scanf("%1d%1d%1d%1d%1d", &n2,&n3,&n4,&n5,&n6);

 printf(" Enter the second group of five digits =");
 scanf("%1d%1d%1d%1d%1d", &n7,&n8,&n9,&n10,&n11);

 first_sum=n1+n3+n5+n7+n9+n11;
 second_sum=n2+n4+n6+n8+n10;
 total=3*first_sum+second_sum;

 printf("check digit =%d\n",9-((total-1)%10));
 return 0;
}
