#include<stdio.h>
#include<conio.h>
int main()
{
int B1=0,B2=0,B3=0,B4=0,B5=0, sum=0;

    printf("\n Enter number of bills");

    printf("\n Enter 1st bill= ");
    scanf("%d",&B1);
    printf("\n Enter 2nd bill= ");
    scanf("%d",&B2);
    printf("\n Enter 3rd bill =");
    scanf("%d",&B3);
    printf("\n Enter 4th bill =");
    scanf("%d",&B4);
    printf("\n Enter 5th bill =");
    scanf("%d",&B5);

     sum=B1+B2+B3+B4+B5;

     printf("\n Enter sum of the given bills %d+%d+%d+%d+%d=%d",B1,B2,B3,B4,B5,sum);

     printf("\n ======================THANK YOU=======================");
     getch();
     return 0;
}

