 #include <stdio.h>
 int main()
 {
 int first,second,third,four,five,ISBN, GSI_Prefix,group_identifier,publisher_code,item_no,check_digit;
 printf(" Enter ISBN :");
 scanf("%d-%d-%d-%d-%d",&first,&second,&third,&four,&five);
 GSI_Prefix=first;
 group_identifier=second;
 publisher_code=third;
 item_no=four;
 check_digit=five;
 printf(" GSI Prefix :%d\n Group identifier :%d\n publisher code :%d\n Item no.:%d\n check digit :%d\n ",first,second,third,four,five);
 return 0;
 }
