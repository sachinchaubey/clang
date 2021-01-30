#include <stdio.h>                                                                                                                                                                                                                                                u#include <stdio.h>

#define n 9

void bubble(int a[],int start,int end);
int main()
{
	int a[n]={1,5,4,3,6,7,8,9,0},start=1;
	bubble(a,start,9);
	for(int i=1;i<=n;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
}

void bubble(int a[],int start,int end)
{

	for(int i=1;i<=n-1;i++)
	{
		for(int j=1;j<=n-i;j++)
	 {
		 if(a[j]>a[j+1])
		{
	 	 int temp=a[j];
  		a[j]=a[j+1];
			a[j+1]=temp;
		}
	}
}
 
}

