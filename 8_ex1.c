#include <stdio.h>

#define N 8

int main()
{
	int i, a[]={1,2,3,4,5,6,7,8};                      //or a[N] or a[]={[0]=1,[7]=8
	//printf("Enter the %d  numbers: ",N);
	//for(i=0;i<N;i++)
	//scanf("%d",&a[i]);

	printf("reverse order num :");
	for(i=(N-1);i>=0;i--)
	 printf(" %d", a[i]);
	printf("\n");
	return 0;
}
	
