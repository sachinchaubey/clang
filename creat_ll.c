#include <stdio.h>
#include <stdlib.h>


struct node{
    int dt;
    struct node *next;
}*p,*q,*start;
void create_LL(int start,int X)
{
    while(X != 99)
    {
        p=(struct node*)malloc(sizeof(struct node));


        p->dt=X;
        if(start==NULL)
        {
            start=p;
        }
        else
            q->next=p;
        q=p;
        p->next=NULL;
        read(X);
    }
}
int main()
{
    int start,X=10;
    create_LL(start,X);
}
