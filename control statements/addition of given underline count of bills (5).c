#include<stdio.h>
#include<conio.h>
int main()
{
int i=0;
float Bill_Amt=0;
double Bill_Sum=0;
while(1)
{
    printf("\n Enter Bill number %d=",i+1);
    scanf("%f",&Bill_Amt);
    if(Bill_Amt<=0)
    {
        break;
    }
    Bill_Sum=Bill_Sum + Bill_Amt;
    i++;
}
printf("\n\n addition of given %d Bills = %d lf",i,Bill_Sum);
getch();
return 0;
}
