#include<stdio.h>
#include<conio.h>
int main()
{
int Bill=0,B_sum=0,i=0, B_cnt=0;
printf("\n Enter how many bills do you have :");
scanf("%d",&B_cnt);
printf("\n\n=========================***===========================");

for(i=1;i<=B_cnt;i++)
{
    printf("\n Enter Bill%d ",i);
    scanf("%d",&Bill);
    B_sum=B_sum+Bill;
}
printf("\n sum of given given %d Bills =%d", B_cnt ,B_sum);

printf("\n\n========================thank you==========================");
getch();
return 0;
}

