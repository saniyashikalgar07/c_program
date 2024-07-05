#include<stdio.h>
#include<conio.h>
int main()
{
int NO1=0,NO2=0;
printf("\n Enter any 2 integer :");
printf("\n Enter number 1 :");
scanf("%d",&NO1);
printf("\n Enter number 2 :");
scanf("%d",&NO2);
if(NO1>NO2)
{
    printf("\n number %d is maximum",NO1);
}
else
{
    printf("\n number %d is maximum",NO2);
}
getch();
return 0;
}
