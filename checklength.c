#include <stdio.h>

int main()
{
	int len=0;

	printf("enter the paragraph : ");
	while( getchar() != '\n')
	 len++;
 printf("the length of the paragraph: %d\n",len);
   return 0;
}
