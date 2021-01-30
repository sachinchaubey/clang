#include <stdio.h>

int fact(int n);
int main()
{
  int j=fact(5);
	 printf("%d",j);
}

int fect(int n)
{
  if(n==0)
  	return 1;
  else
    return n*fact(n-1);
}
