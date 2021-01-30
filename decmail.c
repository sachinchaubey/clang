
#include <stdio.h>


int decimal(int bin);
int power(int n,int i);
int main()
{
	int bin ,i;
  printf("enter the binary no:");
  scanf("%d",&bin);

  int j=decimal(bin);
  printf("decimal no is: %d\n",j);
}
int power(int n,int i)
{
  if(i==0)
  	return 1;
  else
    return n*power(n,i-1);
}

int decimal(int bin)
{
	int rem,i=0,deci=0;
	while(bin!=0)
	{
		rem=bin%10;
		deci=deci+rem*power(2,i);
		bin=bin/10;
		i++;
	}
	return deci;
}
