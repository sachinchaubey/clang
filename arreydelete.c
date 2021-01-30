#include <stdio.h>

  #define N 50


 int delete_arrey(int a[],int item,int ls,int ub);


 int main()
 {
   int a[N]={1,2,4,7,8,9};
   int lb=0; 
   int ub=5;
   int item=4;
   ub=delete_arrey(a,item,lb,ub);
   for(int i=0;i<=ub;i++)
   {
     printf(" %d",a[i]);
   }
   printf("\n");


 }

 int delete_arrey(int a[],int item,int ls,int ub)
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
  return ub-1;
}
