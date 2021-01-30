#include <stdio.h>


void fib(int n,int a,int b);
int main()
{
	int n=8;
	int a=0;
	int b=1;
	fib(n,a,b);
}

void fib(int n,int a,int b)
{
	for(int i=0;i<=n;i++)
	{
		printf(" %d",a);
		int c=a+b;
		    a=b;
		    b=c;
	}
	printf("\n");
}
