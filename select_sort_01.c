#include <stdio.h>

#define N 5
void select_sort(int a[], int start, int end);
void find_great(int a[], int start, int end);

int main(void)
{
    int a[N] = {5,4,6,1,2};
    
    select_sort(a, 0, N - 1);


    for(int i = 0;i < N; i++)
    {
        printf("%d ", a[i]);
    }

        
    return 0;
}


void select_sort(int a[], int start, int end)
{
    if(start < end)
    {
        find_great(a, start, end);
        select_sort(a, start, end - 1);
    }
}

void find_great(int a[], int start, int end)
{
    int i, largest = a[start], l_index = start;

    for(i = start; i <= end; i++)
    {
        if(a[i] > largest)
        {
            largest = a[i];
            l_index = i;
        }
    }

    a[l_index] = a[end];
    a[end] = largest;
}
    
