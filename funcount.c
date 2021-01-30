#include <stdio.h>

void count(int i);
int main()
{
	int i,n=10;
	// count(i);

  for(i=1;i<n;i++)
   count(i);

  return 0;
}

void count(int n)
{
 printf("%d\n",n);
}
