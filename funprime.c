#include <stdio.h>
int prime(int no);
int main()
{
  int no,r;
  printf("enter the no :");
  scanf("%d",&no);

	r=prime(no);

	if(r==1)
	 printf("prime\n ");
  else
   printf("not prime\n");
}

int prime(int no)
{
  int  i;
	for(i=2;i<no;i++)
	{
		if(no%i==0)
		 return 0;
	}
	return 1;
}
