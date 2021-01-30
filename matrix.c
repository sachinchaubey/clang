

#include <stdio.h>

#define MAX 50

int main()
{
 int i,j,sum=0,raws,coloms,a[MAX][MAX];
	printf("enter the form of matrix (m*n) :");
  scanf("%d %d",&raws ,&coloms);

  printf("enter the matrix  :\n");
  for(i=0;i<raws;i++)
  {
  	for(j=0;j<coloms;j++)
  	{
  		scanf(" %d",&a[i][j]);
    }
  }

  printf("raws sum :");
  for(i=0;i<raws;i++)
  {
  	for(j=0;j<coloms;j++)
  	{
  	 sum+=a[i][j];
  	}
  	printf(" %d",sum);
    sum =0;
  }
  printf("\ncoloms sum :");
  for(j=0;j<coloms;j++)
  {
  	for(i=0;i<raws;i++)
  	{
  	 sum+=a[i][j];
  	}
  	printf(" %d",sum);
    sum =0;
  }

  printf("\ndiagonals sum :");
  for(i=0,j=0;i<raws && j<coloms; i++,j++)
  {
  	sum+=a[i][j];
  }
  	printf(" %d",sum);
    sum =0;


  for(i=raws-1,j=0;i<raws && j<coloms; i--,j++)
  {
  	sum+=a[i][j];
  }
  	printf(" %d",sum);
  	printf("\n");
  	return 0; 
}
