#include <stdio.h>

//#define N 10

void fib(int a,int b,int N);
int main()
{
	int a,b,N=10;
	printf("enter the value of a and b :");
	scanf(" %d  %d",&a,&b);

	fib(a,b,N);
}

void fib(int a,int b,int N)
{
	if(N==0)
	{
	  printf("\n");
		return ;
	}
	printf("  %d",a);
	int c=a+b;
	 fib(b,c,N-1);

}
