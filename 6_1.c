#include <stdio.h>

int main()
{
	float n,largest=0;
	printf("Enter the number :");
	scanf("%f", &n);
	while(n!=0)
	{
		if(n>largest)
		largest=n;
	 	printf("Enter the number :");
		scanf("%f", &n);
	}
	printf(" the largest number was %.2f\n",largest);
return 0;
}	
