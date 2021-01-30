 #include <stdio.h>



 int main()
 {
  int x,y;
  printf(" Enter the two positive no. :");
  scanf(" %d%d", &x,&y);
  if (x+y==30)
   {
     printf(" true\n");
   }
  else if ( x==30 || y==30)
   {
     printf(" true\n");
   }
  else 
   {
     printf(" False\n");
   }
  return 0;
 }
