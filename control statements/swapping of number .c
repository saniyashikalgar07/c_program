#include<stdio.h>
#include<conio.h>
int main()
{
int   NO1=0,NO2=0;
up:
printf("\n Enter number");

printf("\n Enter 1 number");
scanf("%d",&NO1);
printf("\n Enter 2 number");
scanf("%d",&NO2);
printf("\n\n given number before swap \n number 1=%d, number 2=%d",NO1,NO2);
NO1=NO1+NO2;
NO2=NO1-NO2;
NO1=NO1-NO2;

printf("\n\n given number after swap \n number 1=%d,number 2 =%d",NO1,NO2);
goto up;
getch();
return 0;
}

