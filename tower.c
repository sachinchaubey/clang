#include <stdio.h>

void tower_of_honoi(int n,char from,char helper,char to);

int main()
{
	int n,A=1,B=2,C=3;
	printf("the value of:");
	scanf("%d",&n);
 	tower_of_honoi(n,'A','B','C');
}
void tower_of_honoi(int n,char from,char helper,char to)
{
	if(n==0)
		return;

		tower_of_honoi(n-1,from,to,helper);
		printf("%d is moved form %c to %c\n",n,from,to);
		tower_of_honoi(n-1,helper,from,to);

}
