#include <stdio.h>

#define N 50


int insert_arrey(int a[],int item,int ls,int ub);


int main()
{
	int a[N]={1,2,4,7,8,9};
	int lb=0;
	int ub=5;
	int item=3;

	ub=insert_arrey(a,item,lb,ub);

  for(int i=0;i<=ub;i++)
  {
  	printf(" %d",a[i]);
  }
  printf("\n");


}

int insert_arrey(int a[],int item,int ls,int ub)
{
	int i=0;
	while(item>=a[i] && i<=ub)
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
  return ub+1;

}
