 #include <stdio.h>


 int main()
 {
  int x,y;
    printf(" A coordinate point in a XY coordinate system and determine in which quadrant the coordinate point lies :\n");
   printf(" enter the two no :");
   scanf(" %d%d", &x,&y);
   if (x>0 && y>0)
    {
      printf("(%d,%d) lies in first quadrant\n",  x,y );
    }
   else if (x<0&& y>0)
    {
      printf("  (%d,%d) lies in second quadrant\n", x,y);
    }
   else if (x<0 && y<0)
    {
      printf(" (%d,%d) lies in third quadrant\n", x,y);
    }
   else if (x>0 && y<0)
    {
      printf(" (%d,%d) lies in fourth quadrant\n", x,y);
    }
   else
    {
      printf(" (%d,%d) at is origin\n", x,y);
    }
  return 0;
 }
