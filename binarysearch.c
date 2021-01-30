#include <stdio.h>

#define n 6

void binary_search(int a[],int start,int end,int data);
int main()
{
	int a[n]={1,2,4,5,6,7},start=0,end=5,data;
	printf("enter the data :");
	scanf("%d",&data);
  binary_search(a,start,end,data);

}

void binary_search(int a[],int start,int end,int data)
{
 if(start<=end)
 {
	int mid=(start+end)/2;
	if(a[mid]==data && start<=end)
	{
	  printf("%d",mid);
		return;
	}
	else if(data<a[mid])
			binary_search(a,start,mid-1,data);
	else
			binary_search(a,start+1,end,data);
 }
 else 
 		printf("not found");
}


