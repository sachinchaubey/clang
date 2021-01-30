#include <stdio.h>
#include <stdlib.h>

#define N 20

void insert_array(int item);
void delete_array(int item);
void display_array();

int a[N],lb=0,ub=-1,cmd,item;
int main()
{
  printf("enter the elements of array :");
  for(int i=0;i<=N;i++)
  {
    scanf("%d",&a[i]);

    if(a[i]==-1)
      break;
    else ub++;
  }

  while(1)
  {
  	printf("\nenter 1 for insert in array\n");
  	printf("enter 2 for delete in array\n");
  	printf("enter 3 for display of array\n");
  	printf("enter 4 for exit\n");

  	printf("enter the cmd:");
  	scanf("%d",&cmd);

  	switch(cmd)
  	{
  		case 1: printf("enter the item :");
  		        scanf("%d",&item);
  		        insert_array(item);
  		        break;

  	  case 2: printf("enter the item:");
  	          scanf("%d",&item);
  	          delete_array(item);
  	          break;

  	  case 3: display_array();
  	          break;

  	  case 4: exit(0);
  	          break;

    }
  }
}
  
 void insert_array(int item)
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
	ub=ub+1;
 }

 void delete_array(int item)
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

 void display_array()
 {
   printf(" ");
 	 for(int i=0;i<=ub;i++)
 	 {
 	 		printf("a[%d]: %d\n ",i,a[i]);
 	 }
 	 printf("\n");
 }
 

