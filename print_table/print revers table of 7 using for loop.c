#include<stdio.h>
#include<conio.h>
int main()
{
int  NO=7,i=1;
printf("\n Enter reverse table of %d is  \n",NO);
for (i=10;i>=1;i--)
{
    printf("\n %3d * %3d = %3d",NO,i,(i * NO));
}
printf("\n =========================================THANK YOU=============================\n");
getch();
return 0;
}
