#include <stdio.h>

#define N 10


void push(int item);
int pop();
int de_queue_1();
void in_queue_2(int item);
int de_queue_2();
void in_queue_1(int item);

int queue_1[N],front_1=-1,rear_1=-1;
int queue_2[N],front_2=-1,rear_2=-1;

int main()
{
    push(2);
    push(3);
    push(4);
    printf("%d\n",pop() );
}
void push(int item)
{
    in_queue_1(item);
}

int pop()
{
    while(front_1!=rear_1)
    {
        in_queue_2(de_queue_1);
    }
    int temp=de_queue_2();
    while(front_2 != rear_2)
    {
        in_queue_1(de_queue_2);
    }
    return temp;
}
int de_queue_1()
{
    if(front_1==rear_1)
    {
        int temp_1=queue_1[front_1];
        return front_1=rear_1=-1;
    }
    else
    {
        int temp_1=queue_1[front_1];
        return front_1=front_1+1;
    }
}
void in_queue_2(int item)
{
    if(rear_2==-1)
    {
        front_2=rear_2=0;
    }
    else
    {
        rear_2=rear_2+1;
    }
    queue_2[rear_2]=item;
}
int de_queue_2()
{
    if(front_2==rear_2)
    {
        int temp_2=queue_2[front_2];
        return front_2=rear_2=-1;
    }
    else
    {
        int temp_2=queue_2[front_2];
        return front_2=front_2+1;
    }
}
void in_queue_1(int item)
{
    if(rear_1==-1)
    {
        front_1=rear_1=0;
    }
    else
    {
        rear_1=rear_1+1;
    }
    queue_1[rear_1]=item;
}
        

