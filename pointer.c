#include <stdio.h>

int sumofElements(int A[])
{
    int i,sum=0;
   // int size=sizeof(A)/sizeof(A[0]);
    for(i=0;i<size;i++)
    {
        sum+=A[i];
    }
    return sum;
}
int main()
{
    int A[]={1,2,3,4,5};
   int size=sizeof(A)/sizeof(A[0]);
    int total=sumofElements(A);
    printf("sum of elements =%d,size of array=%d/n",total,size );
}
    
