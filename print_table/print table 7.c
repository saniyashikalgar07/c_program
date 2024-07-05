#include<stdio.h>
#include<conio.h>
int main()
{
int  NO=7,i=0;
printf("\n Enter table of %d is  \n",NO);
for (i=1;i<=10;i++)
{
    printf("\n %3d * %3d = %3d",NO,i,(i * NO));
}
printf("\n =========================================THANK YOU=============================\n");
getch();
return 0;
}

