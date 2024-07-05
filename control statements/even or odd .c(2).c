#include<stdio.h>
#include<conio.h>
int main()
{
int NO=0;
up:
printf("\n Enter any number :");
scanf("%d",&NO);

if(NO=0)
{
    printf("\n Enter number is Neutral:");
        goto up;
}
if(NO%2==0)
{
    printf("\n Enter number is Even :");
}
else
{
    printf("\n Enter number is Odd");
}
printf("\n ================THANK YOU=====================");
getch();
return 0;
}


