#include <stdio.h>
int main()
{ 
  int dd1,dd2,mm1,mm2,yy1,yy2;
  printf(" Enter the date (dd1/mm1/yy1):");
  scanf("%d/%d/%d",&dd1,&mm1,&yy1);
  printf(" Enter the date (dd2/mm2/yy2):");
  scanf("%d/%d/%d",&dd2,&mm2,&yy2);
  
  if (yy1<yy2)
   {
     printf("%d/%d/%d is earlier then %d/%d/%2d ", dd1,mm1,yy1,dd2,mm2,yy2);
   }
  else if (yy2<yy1)
   {
     printf("%d/%d/%d is earlier then %d/%d/%2d ", dd2,mm2,yy2,dd1,mm1,yy1);
   }
 
    
   else if (yy1==yy2)
    {
      if (mm1<mm2)
     {
       printf("%d/%d/%d is earlier then %d/%d/%2d ", dd1,mm1,yy1,dd2,mm2,yy2);
     }
     else if ( mm2<mm1) 
     {
       printf("%d/%d/%d is earlier then %d/%d/%2d ", dd2,mm2,yy2,dd1,mm1,yy1);
     }
   
    }
    
  
   if  (mm1==mm2 && yy1==yy2)
     {
       if (dd1<dd2)
      {
        printf("%d/%d/%d is earlier then %d/%d/%2d ", dd1,mm1,yy1,dd2,mm2,yy2);
      }
      else if ( dd2<dd1)
      {
        printf("%d/%d/%d is earlier then %d/%d/%2d ", dd2,mm2,yy2,dd1,mm1,yy1);
      }
    else 
      {
         printf( " both are same");
         
      }
     }
    
  return 0;
}
     
   
