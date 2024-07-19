#include<stdio.h>
#include<conio.h>
int main()
{
int No;
printf("\n Enter any number:");
scanf("%d",&No);
if(No>0)
{
    printf("\n Entered number is positive");
}
else if (No<0)
{
    printf("\n Enter number is negative");
}
getch();
return 0;
}
