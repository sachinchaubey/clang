#include <stdio.h>

#define 


int path(int a[],int start,int end);

void quick_sort(int a[],int start,int end);

int main()
{
	int a[N]={5,2,9,12,1};

	quick_sort(a,0,N-1);
 for(int i=0;i<N;i++)
 {
 	printf(" %d",a[i]);
 }
 printf("\n");

}

void quick_sort(int a[],int start,int end)
{
	if(start<end)
	{
	 int p_index=path(a,start,end);
	 
		quick_sort(a,start,p_index-1);
		quick_sort(a,p_index+1,end);
	 
  }
}

int path(int a[],int start,int end)
{
	int pvoit=a[end],p_index=start;
	for(int i=0;i<end;i++)
	{
		if(a[i]<=pvoit)
		{
			int temp=a[i];
			a[i]=a[p_index];
			a[p_index]=a[i];
			p_index++;
    }
  }
    a[end]=a[p_index];
   a[p_index]=pvoit;
   return p_index;
 
}
