#include <stdio.h>
#define N 10 


void push_stack_1(int var_2);
int pop_stack_1();
void push_stack_2(int var_1);
int pop_stack_2();
void q_insert(int item);
int q_delete();

int stack_1[N],top_1=-1;
int stack_2[N],top_2=-1;

int main()
{
    q_insert(1);
    q_insert(2);
    q_insert(3);
    q_insert(4);
    printf(" %d\n", q_delete() );
    printf(" %d\n", q_delete() );
    printf(" %d\n", q_delete() );
    printf(" %d\n", q_delete() );
    //q_insert(5); 
    printf(" %d\n", q_delete() );
}



void q_insert(int item)
{
   push_stack_1(item);
}
int q_delete()
{
       while(top_1 != -1)
       {
           int var_1=pop_stack_1();
           push_stack_2(var_1);
       }
       int temp=pop_stack_2();
       while(top_2 != -1)
       {
           int var_2=pop_stack_2();
           push_stack_1(var_2);
       }
       return temp;
   
}
void push_stack_2(int var_1)
{
    if(top_2==N-1)
    {
        printf(" OVERFLOW ");
        return ;
    }
    else
    {
        top_2=top_2+1;
        stack_2[top_2]=var_1;
    }
}
int pop_stack_1()
{
    if(top_1==-1)
    {
        printf(" UNDERFLOW ");
        return -1;
    }
    else
    {
        return stack_1[top_1--];
    }
}
void push_stack_1(int var_2)
{
    if(top_1==N-1)
    {
        printf(" OVERFLOW ");
        return ;
    }
    else
    {
        top_1=top_1+1;
        stack_1[top_1]=var_2;
    }
}
int pop_stack_2()
{
    if(top_2==-1)
    {
        printf(" UNDERFLOW ");
        return -1; 
    }
    else
    {
       return stack_2[top_2--];
    }
}
