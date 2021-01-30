#include <stdio.h>
#define n 8
void insert_sort(int a[]);

int main()
{
    int a[n]={5,2,4,6,1,3,0,9};
    insert_sort(a);
    for(int i=0;i<n;i++)
    {
        printf("%d  ",a[i]);
    }
    printf("\n");
}

void insert_sort(int a[])
{
    for(int j=1;j<=n-1;j++)
    {
       int key=a[j];
       int i=j-1;
       while(a[i]>key && i>=0)
       {
           a[i+1]=a[i];
           i=i-1;
       }
       a[i+1]=key;
    }
}
