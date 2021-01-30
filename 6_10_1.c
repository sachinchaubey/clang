#include <stdio.h>
#include <stdbool.h>

int main(void)
{

    int m, d, y, em = 0, ed = 0, ey = 0, k = true;

    for(;;)
    {
        printf("Enter the date: ");
        scanf("%d/%d/%d", &m, &d, &y);

        if(m == 0 && d == 0 && y == 0)
            break;
        else if(y < ey||k)
        {
            ey = y;
            ed = d;
            em = m;
            k = false;
        }
        else if(y == ey)
        {
            if ( m < em)
            {
                ey = y;
                ed = d;
                em = m;
            }
            else if(m == em)
            {
                if(d < ed)
                {
                    ey = y;
                    ed = d;
                    em = m;
                }
            }
        }
    }
    printf("%2d/%2d/%d is the earliest date", em, ed, ey);

        return 0;
    }
