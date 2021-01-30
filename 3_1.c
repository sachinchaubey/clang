#include <stdio.h>
int main()
{
int  mm,dd,yyyy;
printf("Enter date(mm/dd/yyyy);");
scanf("%d/%d/%d", &mm,&dd,&yyyy);
printf("%d%d%d",yyyy,dd,mm);
return 0;
}

