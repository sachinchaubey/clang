 #include <stdio.h>
  
  int main()
  {
   int cmd;
   float clear,credit,debit,balance,exit;
   printf(" *** ACME CHECK book - balancing program ***\n");
   printf(" commond : 0=clear,2=credit,3=debit,4=exit\n\n");
   
  for ( ; ; )
   {
    printf(" Enter commond :");
    scanf("%d", &cmd);
    switch (cmd)
    { 
     case 0: printf(" balance :");
             scanf("%f",&balance);
             break ;
     case 1: printf(" enter amount of credit :");
             scanf("%f", &credit);
             balance += credit;
             break ;
     case 2: printf(" enter amount of debit :"); 
             scanf("%f", &debit);
             balance -= debit;
             break ;
     case 3: printf(" Check Balance :%0.2f\n", balance );
             break ;
     case 4: return 0;
     default:  printf(" commond : 0=clear,2=credit,3=debit,4=exit\n\n");
     }
   }
 }
       
