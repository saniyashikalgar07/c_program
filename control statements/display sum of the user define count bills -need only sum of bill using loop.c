#include<stdio.h>
#include<conio.h>
int main()
{
int i=0,Bill_Amt=0,Bill_Sum=0,B_Cnt=0,Bill=0;
printf("\n Enter how many bills do you have :");
scanf("%d",&B_Cnt);
printf("\n\n ============================###################====================================\n\n");

 for(i=1; i<=B_Cnt;i++)
{
    printf("\n Enter Bill number %d= ",i);
    scanf("%d",&Bill);

    Bill_Sum = Bill_Sum + Bill;
}
printf("\n\n addition of given %d Bills = %d",B_Cnt,Bill_Sum);

printf("\n\n====================THANK YOU========================\n\n ");

getch();
return 0;
}

