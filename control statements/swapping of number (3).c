#include<stdio.h>
#include<conio.h>
int main()
{
int NO1=0,NO2=0,TEMP=0;

printf("\n Enter any 2 number");

printf("\n Enter number 1");
scanf("%d",&NO1);
printf("\n Enter number 2");
scanf("%d",&NO2);


printf("\n\n given number before swap \n number 1=%d, number 2=%d",NO1,NO2);
TEMP= NO1;
NO1=NO2;
NO2=TEMP;
printf("\n\n given number after swap \n number 1=%d, number 2=%d",NO1,NO2);
getch();
return 0;
}

