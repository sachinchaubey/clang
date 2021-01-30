#include <stdio.h>

#define N 5



void selection_sort(int A[],int n);
int main()
{
  int A[N];
  printf("enter the unsorted list no. :");
  for(int i=0;i<N;i++)
  {
  	scanf(" %d",&A[i]);
  }
  printf(" in form of selectionsorting list :");

  selection_sort(A,N);
  for(int i=0;i<N;i++)
  {
    printf(" %d",A[i]);
  }
  printf("\n");

}

void selection_sort(int A[],int n)
{
  for(int i=0;i<N-1;i++)
  {
    for(int j=i+1;j<N;j++)
    {
      if(A[i]>=A[j])
      {
        int temp=A[i];
        A[i]=A[j];
        A[j]=temp;

      }
    }
  }
}
