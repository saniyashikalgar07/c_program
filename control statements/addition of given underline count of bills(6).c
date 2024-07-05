#include<stdio.h>
#include<conio.h>
int main()
{
int i=0, B_cnt=0;
float Bill_Amt=0;
double Bill_Sum=0;
printf("\n Enter how many bills :");
scanf("%d",&B_cnt);

 for(i=1; i<=B_cnt ; i++)
{
    printf("\n Enter Bill number %d=",i);
    scanf("%f",&Bill_Amt);

    Bill_Sum=Bill_Sum + Bill_Amt;
}
printf("\n\n addition of given %d Bills = %lf",Bill_Sum);
getch();
return 0;
}

