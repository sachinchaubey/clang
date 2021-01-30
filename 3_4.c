#include <stdio.h>
int main()
{
int telephone_no,first,second,third;
printf("Enter the Telephone number [(xxx) xxx-xxxx]:\n");
scanf("(%d) %d-%d", &first,&second,&third);
printf("You entered: %d.%d.%d\n",first,second,third);
return 0;
}
