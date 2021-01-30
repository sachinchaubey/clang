#include <stdio.h>
int main()
{
 int n,n1,n2;
 printf(" Enter the two digit no. =");
 scanf("%d", &n);
 n1=n%10;
 n2=n/10;
 printf(" reverce digit =%d%d\n", n1,n2);
 return 0;
}

