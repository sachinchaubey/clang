#include <stdio.h>

#define n 6

void bubble(int a[],int start,int end);
int main()
{
	int a[n]={2,5,6,4,1,0};
	 bubble(a,0,n-1);
	 for(int i=0;i<n;i++)
	 {
	   printf(" %d",a[i]);
	 }
}

void bubble(int a[],int start,int end)
{
 if(start<end)
 {
	for( int i=start;i<n;i++)
	{
		if(a[i]>a[i+1])
		{
			int temp =a[i];
			a[i]=a[i+1];
			a[i+1]=temp;
		}
	}
	bubble(a,start,end-1);
 }
}
