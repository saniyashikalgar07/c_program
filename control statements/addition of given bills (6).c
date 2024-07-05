#include<stdio.h>
#include<conio.h>
int main()
{
int NO=0,SUM=0,i=0;

for(i=1;i<=7;i++)
{
    printf("\n Enter number %d =",i);
    scanf("%d",&NO);
    SUM=SUM+NO;
}
printf("\n\n addition of given number =%d",SUM);

printf("\n =============================THANK YOU===============================");
getch();
return 0;
}
