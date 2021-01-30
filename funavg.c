#include <stdio.h>

float avg(float x,float y);
int main()
{
	float a,b,c;

	 printf("enter  the three no:");
	 scanf("%f %f %f",&a,&b,&c);
   avg(a,b);

	 printf(" the avg of %.2f & %.2f is %.2f\n",a,b,avg(a,b));
	 printf(" the avg of %.2f & %.2f is %.2f\n",b,c,avg(b,c));
	 printf(" the avg of %.2f & %.2f is %.2f\n",c,a,avg(c,a));

}
float avg(float x,float y)
{
	return (x+y)/2;
}
