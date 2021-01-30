#include<stdio.h>
#include<stdlib.h>

#define N 50

void insert_beg_array(int item);
void insert_mid_array(int item);
void insert_at_nth_array(int item);
void insert_end_array(int item);
void delete_beg_array();
void delete_mid_array();
void delete_at_nth_array();
void delete_end_array(); 
void display_array();
int a[N],lb=0,ub=-1,cmd,item;
int main()
{
    printf(" enter the elements of array :");
    for (int i=0; i<=N;i++)
    {
        scanf("%d",&a[i]);

        if(a[i]==-1)  //a[i]=-1 is only use for array break, this -1 is not count in array//
           break;
        else
           ub++;
        
    }

    while(1)
    {
        printf("\n enter 1 for insert at beginning in array\n");
        printf(" enter 2 for insert at mid in array\n");
        printf(" enter 3 for insert at nth position in array\n");
        printf(" enter 4 for insert at end in array\n");
        printf(" enter 5 for delete at beginning in array\n");
        printf(" enter 6 for delete at mid in array\n");
        printf(" enter 7 for delete at nth position in array\n");
        printf(" enter 8 for delete at end in array\n");
        printf(" enter 9 for display of array\n");
        printf(" enter 10 for exit\n");

        printf(" enter the cmd :");
        scanf("%d",&cmd);

        switch(cmd)
        {
            case 1 : printf("entet the item :");
                     scanf("%d",&item);
                     insert_beg_array(item);
                     break;

            case 2 : printf("entet the item :");
                     scanf("%d",&item);
                     insert_mid_array(item);
                     break;
                     
            
            case 3 : printf("entet the item :");
                     scanf("%d",&item);
                     insert_at_nth_array(item);
                     break;
            
            case 4 : printf("entet the item :");
                     scanf("%d",&item);
                     insert_end_array(item);
                     break;
            
            case 5 :
                     delete_beg_array();
                     break;
            
            case 6 :
                     delete_mid_array();
                     break;
            
            case 7 :
                     delete_at_nth_array();
                     break;
            
            case 8 :
                     delete_end_array();
                     break;
            
            case 9 : display_array();
                     break;
        
            case 10 : exit(0);
                     break;
        }
        
    }
}

void insert_beg_array(int item)
{
  if(ub==N-1)
       printf("overflow");
  else
  {
    int j=ub;
    while(j>=0)
    {
        a[j+1]=a[j];
        j=j-1;
    }
    a[0]=item;
    ub=ub+1;
  }
      
}
void insert_mid_array(int item)
{
  
  if(ub==-1)
     printf("overflow");
  else 
  {
    int mid = (ub - lb) / 2;
    int j=ub;
    while(j>=mid)
    {
        a[j+1]=a[j];
        j--;
    }
    a[mid]=item;
    ub++;

  }
} 

void insert_at_nth_array(int item)
{
    //insert nth position means insert element in any position in array//
  if(ub==N-1)
       printf("overflow");
  else
  {
    int i;
    printf("enter the value of i:");
    scanf(" %d",&i);
    int j = ub;
    while(j>=i)
    {
        a[j+1]=a[j];
        j=j-1;
    }
    a[i]=item;
    ub=ub+1;
  }
      
}

void insert_end_array(int item)
{
  if(ub==N-1)
       printf("overflow");
  else
    ub++;
    a[ub]=item;
}

void delete_beg_array()
{
  
  if(ub==-1)
     printf("underflow");
  else
  {
    int i=0;
    int temp=a[i];
    int j=i;
    while(j<ub)
    {
        a[j]=a[j+1];
        j=j+1;

    }
    ub=ub-1;
  }
}

void delete_mid_array()
{
  
  if(ub==-1)
     printf("underflow");
  else 
  {
    int mid = (ub - lb) / 2;
    int start = mid + 1;
    while(start <= ub)
    {
        a[start - 1] = a[start];
        start++;
    }
    ub--;

  } 
}

void delete_at_nth_array()
{
    // delete nth position means delete element in any position in array//
  if(ub==-1)
     printf("underflow");
  else 
  {
    int i=0;
    printf("enter the value of i:");
    scanf(" %d",&i);
    int temp=a[i];
    int j=i;
    while(j<ub)
    {
        a[j]=a[j+1];
        j=j+1;
    }
    
    ub=ub-1;
  }
}


void delete_end_array(int item)
{
  if(ub==-1)
     printf("underflow");
  else
  {
    int temp=a[ub];
    ub=ub-1;
  }
}


void display_array()
{  
    if(ub>=0)
    {
      printf("\n");
      for(int i=0; i<=ub; i++)
     {
        printf("a[%d]: %d\n",i,a[i]);

     }
     printf("\n");
    } 
    else
    {
       printf(" array is empty");
    }
}    
