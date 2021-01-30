 #include <stdio.h>
 #include <stdbool.h>
 int main()
 {
   int N,rem, seen_digit[10]={false};
   printf("Enter the number :");
   scanf("%d",&N);

   while(N>0){
   rem=N%10;
     if(seen_digit[rem]==true)
       break;
     seen_digit[rem]=true;
     N=N/10;
   }

  if(N>0)
   printf("Repeted digits\n");
  else
   printf("Non Repeted digits\n");
 }
