#include <stdio.h>

int main()
{
 int i,j,sum=0,a[5][5]={{8,3,9,0,10},{3,5,17,1,1},{2,8,6,23,1},{15,7,3,2,9},{6,14,2,6,0}};

 printf("Raw sum :");
 for(i=0;i<5;i++)
 {
	for(j=0;j<5;j++)
	{
		sum+=a[i][j];
	}
	printf(" %d",sum);
	sum=0;
 }

 printf("\ncolomb sum :" );
 for(j=0;j<5;j++)
 {
 	for(i=0;i<5;i++)
  {
		sum+=a[i][j];
	}
	printf(" %d",sum);
	sum=0;
 }
 printf("\ndiagonal sum :");
  for(i=0,j=0;i<5 && j<5;i++,j++)
  {
  	sum+=a[i][j];
  }
   printf(" %d",sum);
   sum=0;

  for(i=4,j=0;i<5 && j<5;i--,j++)
  {
  	sum+=a[i][j];
  }
   printf(" %d\n",sum);


 return 0;
}

