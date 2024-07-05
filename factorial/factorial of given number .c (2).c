#include<stdio.h>
#include<conio.h>
int main()
{
int NO=0,Temp=0;
long long int fact=0;

printf("\n Enter a positive number to fine its factorial: ");
scanf("%d",&NO);
if(NO<=0)
{
printf("\n INVALID INPUT ");
goto down;
}
fact=1;
while(NO>0)
{
    fact=fact*NO;
    NO--;
}
printf("\n factorial of given number is %lld",fact);
down:
getch();
return 0;
}
