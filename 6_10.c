#include <stdio.h>
int main()
{
  int dd,mm,yy,ed,em,ey,DD,MM,YY;
  printf(" Enter the date (dd/mm/yy):");
  scanf("%d/%d/%d",&DD,&MM,&YY);
  ed=DD;

  em=MM;
  ey=YY;
  while(dd!=0 && mm!=0 && yy!=0 )
 {
   printf(" Enter the date (dd/mm/yy):");
   scanf("%d/%d/%d",&dd,&mm,&yy);

  if (yy<ey)
    ey=yy;

  else if (yy>ey)

     ey=YY;

  else  if (YY==yy)
    {
      if (mm<em)
          em=mm;
      else if ( mm>em)

          em=MM;
    }
   if  (MM==mm && YY==yy)
     {
       if (dd<ed)
         ed=dd;
       else if ( dd>ed)
         ed=DD;
     }
   else
        printf( " ALL ARE SAME");

   }
    printf("Earliest date is %d/%d/%d(yy/mm/dd)",ey,em,ed);

  return 0;
}
