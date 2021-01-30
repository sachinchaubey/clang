#include <stdio.h>
#include <stdbool.h>

#define N 50

bool is_empty();
bool is_full();
void push(int n);
int pop();

int stack[N];
int top;

int main()
{
 	push(5);
 	push(6);
  printf("poped element of stack : %d\n",pop());
}

bool is_empty()
{
	if(top==-1)
		return true;
	else
	 	return false;
}

bool is_full()
{
	if(top==N-1)
		return true;
	else
		return false;
}

void push(int n)
{
	if(is_full())
		printf(" stack is overflow ");
	else
		top=top+1;
		stack[top]=n;
}

int pop()
{
	if(is_empty())
	{
		printf(" stack is underflow ");
		return 0;
	}
  else
  {
    return stack[top--];
	}
}

