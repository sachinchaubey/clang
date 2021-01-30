#include <stdio.h>
int main()
{
int n11,n12,n13,n14,n21,n22,n23,n24,n31,n32,n33,n34,n41,n42,n43,n44,r1,r2,r3,r4,row_sums,columb_sums,diagonal_sums; 
printf("Enter the no. from 1 to 16 in any order\n"); 
scanf("%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d", &n11,&n12,&n13,&n14,&n21,&n22,&n23,&n24,&n31,&n32,&n33,&n34,&n41,&n42,&n43,&n44);
printf("%d\t%d\t%d\t%d\t\n%d\t%d\t%d\t%d\t\n%d\t%d\t%d\t%d\t\n%d\t%d\t%d\t%d",n11,n12,n13,n14,n21,n22,n23,n24,n31,n32,n33,n34,n41,n42,n43,n44);
r1=n11+n12+n13+n14;
r2=n21+n22+n23+n24;
r3=n31+n32+n33+n34; 
r4=n41+n42+n43+n44;
printf("\nRow sums:%d %d %d %d", r1,r2,r3,r4);
return 0;
}

