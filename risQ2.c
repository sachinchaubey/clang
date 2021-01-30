 #include <stdio.h>



 int main()
 {
  
   int num;
   printf(" CHECK THE GIVEN NO. ARE EVEN OR ODD\n");
   printf(" enter the positive no. :");
   scanf(" %d", &num);
   if (num%2==0)
    {
      printf( " %d is a even num\n", num);
    }
   else
    {
      printf(" %d is a odd num\n", num);
    }
  return 0;
 }
