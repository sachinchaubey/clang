#include <stdio.h>


int power(int n,int i);
int main()
{
  int j=power(3,3);
 printf("%d",j);
}

int power(int n,int i)
{
  if(i==0)
   return 1;
  else
	 return n*power(n,i-1);
}
