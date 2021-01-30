#include <stdio.h>
#include <stdlib.h>


void traverse();
void create_ll(int x);
void insert_beg(int item);
void insert_mid(int item,int data);
void insert_end(int item);
void delete_beg();
void delete_mid(int data);
void delete_end();


struct node{
    int dt;
    struct node *next;
};
struct node  *r,*p,*q,*start;

int main()
{
    int x,i;
   while(i!=9)
   {
     printf(" enter 1 for create linklist\n");
     printf(" enter 2 for insert_beg\n");
     printf(" enter 3 for insert_mid\n");
     printf(" enter 4 for insert_end\n");
     printf(" enter 5 for delete_beg\n");
     printf(" enter 6 for delete_mid\n");    
     printf(" enter 7 for delete_end\n");
     printf(" enter 8 for traverse\n");
     printf(" enter 9 for exit\n");

   
 
     printf(" \nSELECT ANY NUMBERS \n");
     scanf(" %d",&i);

     if(i==1)
     {
         int x;
         printf("enter the value :");
         scanf(" %d",&x);

         create_ll(x);
    
     }

     else if(i==2)
     {
         int item;
         printf("enter the item:");
         scanf(" %d",&item);
         insert_beg(item);
     }

     else if(i==3)
     {
         int item,data;
         printf("enter the item:");
         scanf(" %d",&item);
         printf("\n enter the data:");
         scanf(" %d",&data);
         insert_mid(item,data);
     }

     else if(i==4)
     {
         int item;
         printf("enter the item:");
         scanf(" %d",&item);
         insert_end(item);
     }

     else if(i==5)
     {
         delete_beg();
     }

     else if(i==6)
     {
         int data;
         printf("\n enter the data:");
         scanf(" %d",&data);
         delete_mid(data);
     }

     else if(i==7)
     {
         delete_end();
     }

     else if(i==8)
     {
         traverse();
     }

     else if(i==9)
     {
         exit;
     }


   }
    
}

void create_ll(int x)
{
  
   
        p=(struct node*)malloc(sizeof(struct node));
        p->dt=x;
        if(start==NULL)
        {
            start=p;
        }
        else
            q->next=p;
        q=p;
        p->next=NULL;
        //read(x);
        
        
}

void insert_beg(int item)
{
    p=(struct node*)malloc(sizeof(struct node));
    if(p==NULL)
    {
        printf("overflow\n");
    }
    else
    {
        p->dt=item;
        q=start;
        p->next=q;
        start=p;
    }
}

void insert_mid(int item,int data)
{
    p=(struct node*)malloc(sizeof(struct node));
    if(p==NULL)
    {
        printf("overflow\n");
    }
    else
    {
        q=start;
        while(q->dt!=data)
        {
            r=q;
            q=q->next;
        }
        
        r->next=p;
        p->next=q;
        p->dt=item;
        
    }
}

void insert_end(int item)
{
    p=(struct node*)malloc(sizeof(struct node));
    if(p==NULL)
    {
        printf("overflow\n");
    }
    else
    {
        p->dt=item;
        p->next=NULL;
        q=start;
        while(q->next!=NULL)
        {
            q=q->next;
        }
        q->next=p;
    }
}

void delete_beg()
{
    if(start==NULL)
    {
        printf("underflow\n");
    }
    else
    {
        p=start;
        q=p->next;
        start=q;
        free(p);
    }
}

void delete_mid(int data)
{
    if(start==NULL)
    {
        printf("underflow\n");
    }
    else
    {
        q=start;
        while(q->dt!=data)
        {
            r=q;
            q=q->next;
        }
        r->next=q->next;
        free(q);
    }
}

void delete_end()
{
    if(start==NULL)
    {
        printf("underflow\n");
    }
    else
    {
        q=start;
        while(q->next!=NULL)
        {
            r=q;
            q=q->next;
        }
        r->next=NULL;
        free(q);
    }
}

void traverse()
{
    q=start;
    while(q->next !=NULL)
    {
        printf(" %d",q->dt);
        q=q->next;
    }
    printf(" %d",q->dt);
    printf("\n\n");
}
