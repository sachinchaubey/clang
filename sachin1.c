#include <stdio.h>
#include <stdbool.h>
#define N 10


bool overflow();
bool underflow();
int Front();
void Q_delete();
void Q_insert(int n);

int queue[N], front = -1, rear = -1;


int main(void)
{
   //this will insert the element in queue 
    Q_insert(1);
    //this will delete the element in queue

    printf("%d", Front());
    return 0;
}

bool underflow()
{
    if(front == -1 && rear == -1)
        return true;
    else 
        return false;
}

bool overflow()
{
    if(rear == N - 1)
        return true;
    else 
        return false;
}

void Q_insert(int n)
{
    if(overflow())
        return;
    else if(underflow())
        front = rear = 0;
    else
        rear = rear + 1;
    queue[rear] = n;
}

void Q_delete()
{
    if(underflow())
        return;
    else if(front == rear)
    {
        front = rear = -1;
    }
    else
    {
        front = front + 1;
    }
}

int Front()
{
    if(!underflow())
        return queue[front];
}
