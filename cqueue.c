#include <stdio.h>
#include <stdbool.h>

#define N 5

bool is_full();
bool is_empty();
void q_insert(int item);
int q_delete();
int  queue[N],front=-1,rear=-1;

int main()
{
	q_insert(5);
	q_insert(4);
	q_insert(6);
	q_insert(9);
  q_insert(7);
	q_delete();
	q_delete();
	printf("delete element :%d\n",q_delete());
	q_insert(1);
	q_insert(2);
	q_insert(3);
 
}

bool is_empty()
{
	if(front==-1 && rear==-1)
		return true;
	else
		return false;
}

bool is_full()
{
	if(front==(rear+1)%N)
		return true;
	else
		return false;
}

void q_insert(int item)
{
	if(is_full())
	{
		printf("\n overflow \n");
		return;
	}
	else if(is_empty())
	{
		front=0;
		rear=0;
	}
	else
	{
		rear=(rear+1)%N;
	}
 queue[rear]=item;
}
int q_delete()
{
	if(is_empty())
	{
		printf("\n underflow \n");
		return 0;
	}
	else if(front==rear)
	{
  	int temp=front;
		front=-1;
		rear=-1;
		return queue[temp];
	}
	else
	{
		int temp=front;
		front=(front+1)%N;
		return queue[temp];
	}
}
