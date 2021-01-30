#include <stdio.h>

int main()
{
	int i,rp,rem,N,digit[10]={0};
	printf("Enter the number :");
	scanf("%d",&N);

	 while(N>0){
		rem=N%10;
		if(digit[rem]==1){
			rp=rem;
			printf("Repeted digits: %d\n",rp);
			}
   digit[rem]=1;
   N=N/10;

  }
}
