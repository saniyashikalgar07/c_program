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
for (Temp=NO,fact=1;Temp>0;Temp  )
{
    fact=fact*Temp;
}
printf("\n factorial of %d is = %d",NO,fact);
down:
getch();
return 0;
}
