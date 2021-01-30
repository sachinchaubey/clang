  #include <stdio.h>
   
  int main()
  {
  
    int x;
    printf("  Check the no. are multiply of 3 and 7\n ");
    printf(" Enter the positive no :");
    scanf(" %d", &x);
    
     
    if (x%3==0 && x%7==0)
     {
       printf( " Yes , %d are is multiple of 3 and 7\n", x);
     }
    else
     {
       printf(" No, %d are not multiple of 3 and 7\n", x);
     }
   return 0;
  }
