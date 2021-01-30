#include <stdio.h>

int main()
{
	int m,n,i,gcd;
	printf("Enter the two integers :");
	scanf("%d %d",&m,&n);
	
	
	if (m==0){
	printf(" gcd %d",n);
	return 0;
	}
	else if (n==0){
	printf("gcd: %d",m);
	return 0;
	}
	
	i=0;
	while(i<=m && i<=n)
		{
			if(m%i==0 && n%i==0)
			gcd=i;
			i++;
		}
  printf("the GCD was :%d\n",gcd);
}
