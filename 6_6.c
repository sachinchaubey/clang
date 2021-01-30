#include <stdio.h>


int main(void)

{
  int i,n;
  printf("All even num square\n" );
  printf(" enter the even no. :");
  scanf("%d", &n);
  for (i=2;i*i<=n;i+=2)
   printf("%d\n", i*i);
  return 0;
  
}
