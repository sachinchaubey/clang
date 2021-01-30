#include<stdio.h>

#define N 5

int bubble(int a[],int start,int end);
int  start= 0 ,end=-1 ,a[N];
int main()
{
     printf("enter the unsorted list :");
     for(int i=0;i<N;i++)
      {
           
           scanf("  %d",&a[i]);
           if(a[i] == -1)
           {
              break;
           }
           else
              end++;
        
        }
   
    bubble(a,0,end);
    printf(" after sorting array :\n");
    for(int i=0;i<=end;i++)
    {
        printf("a[%d]: %d\n",i,a[i]);
    }
}

int bubble(int a[],int start,int end)
{
    if(start<end)
    {
      for(int i = 0; i < end; i++)
      {
          if(a[i] > a[i + 1])
          {
             
              int temp = a[i];
              a[i] = a[i + 1];
              a[i + 1] = temp;
          }
             
      }
      bubble(a,start,end-1);
      
    }
    
}