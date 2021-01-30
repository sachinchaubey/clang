#include <stdio.h>
int main()
{
int new1,new2,deno1,deno2,result_new,result_deno,/,+;
printf("Sum of two fractions\n");
printf("Enter the value of fractions seprated by a plus sign:");
scanf("%d/%d+%d/%d", &new1,&deno1,&new2,&deno2);
result_new= new1*deno2+new2*deno1;
result_deno= deno1*deno2;
printf(" The sum is :%d/%d",result_new,result_deno);
return 0;
}
