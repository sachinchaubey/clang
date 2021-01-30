#include<stdio.h>
int main(void)
{
int r=50;
float v;
printf("Enter the value of radius ");
scanf("%d",&r);
v = (3/4.0)*3.14*r*r*r;
printf("%f\n",v);
return 0;
}
