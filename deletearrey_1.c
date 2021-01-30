#include <stdio.h>

#define N 20


void delete(int item);


int a[N];
int lb=0;
int ub=-1;
int item;

int main()
{

	printf(" enter the elememt of arrey :");
	for(int i=0;i<=N;i++)
	{
		scanf(" %d",&a[i]);
	  if(a[i]==-1)
	  {
	  	break ;
	  }

	  else
	   ub++;
	}
	printf("enter the item :");
	scanf(" %d",&item);

	delete(item);


	
	printf("after delete element in arrey :");
	for(int i=0;i<=ub;i++)
	{
		printf(" %d",a[i]);
	}
	 printf("\n");
}

void delete(int item)
{
	int i=0;
	while(item!=a[i] && i<=ub)
	{
	 i++;
	}
	int temp=a[i];
	int j=i;
	while(j<ub)
	{
		a[j]=a[j+1];
		j=j+1;
	}
 ub=ub-1;
}
		
