#include<stdio.h>
#include<conio.h>
int main()
{
int Bill=0,B_sum=0,i=0;
printf("\n\n=========================***===========================");

for(i=1;i<=7;i++)
{
    printf("\n Enter Bill%d ",i);
    scanf("%d",&Bill);
    B_sum=B_sum+Bill;
}
printf("\n sum of given 7 Bills =%d",B_sum);

printf("\n\n========================thank you==========================");
getch();
return 0;
}
