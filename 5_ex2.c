  #include <stdio.h>
 int main()
 {
  int n,sum=0;
  printf(" enter the no. :");
  scanf(" %d", &n);
  while (n != 0)
  {
   sum += n;
   scanf(" %d", &n);
  }
  printf(" sum :%d\n", sum);
 return 0;
 }
