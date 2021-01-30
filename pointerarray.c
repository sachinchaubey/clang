#include <stdio.h>

#define N 50;

int a[N]={1,2,4,5,6};
int lb=0;
int ub=5;
int main(void)
{
	int item=6;

	insert(&item);
}

void insert(int *item)
{
	int i=0;
	while(*item>=a[i] && i<=*ub)
	{
		i++;
	}
	int j=ub;
	while(j<=i)
	{
		a[j+1]=a[j];
		j=j-1;
	}
	a[i]=item;
	ub=ub+1;
}

