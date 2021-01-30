#include <stdio.h>

#define max 50

int a[max];
int binary(int n);
int main()
{
	//printf("enter the decimal numbers :");
	//scanf(" %d",&n);
    int j=binary(25);
 printf(" in binary :");
 for( int i=j-1;i>=0;i--)
 {
 	printf("%d",a[i]);
 }
 printf("\n");
}



int binary(int n)
{
 int i;
 for( i=0;n>0;i++)
 {
 	a[i]=n%2;
 	n/=2;
 }
 return i;
}
