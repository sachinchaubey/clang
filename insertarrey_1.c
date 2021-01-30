#include <stdio.h>


#define N 20


void insert(int item);

	int a[N];
	int lb=0;
	int ub=-1;
	int item;

int main()
{ 
	printf(" enter the value :");
	for(int i=0;i<=N;i++)
	{
		scanf(" %d",&a[i]);

		if(a[i]==-1)
		{
			break;
		}
		else
		  ub++;

	}
 
  printf("enter the item :");
  scanf(" %d",&item);
  printf(" element insert in arrey  :");
	insert(item);
 for(int i=0;i<=ub;i++)
 {
 	printf(" %d",a[i]);
 }
 printf(" \n");


}

void insert(int item)
{
	int i=0;
	while(a[i]<=item && i<=ub)
	{
		i++;
	}
	int j=ub;
	while(j>=i)
	{
		a[j+1]=a[j];
		j=j-1;
	}
 a[i]=item;
 ub= ub+1;
}
