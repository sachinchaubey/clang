#include <stdio.h>
int main()
{
 int n,n1,n2,n3;
 printf(" Enter the 3 digits no. =");
 scanf("%d", &n);
 n1=n%10;
 n2=(n%100)/10;
 n3=n/100;
 printf(" Reverce digits =%d%d%d\n",n1,n2,n3);
 return 0;
}
