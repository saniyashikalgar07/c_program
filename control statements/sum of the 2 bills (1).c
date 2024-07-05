#include<stdio.h>
#include<conio.h>
int main()
{
    int B1=0,B2=0,billsum=0;

    printf("\n Enter any bills");

    printf("\n Enter 1st bill :");
    scanf("%d",& B1);
    printf("\n Enter 2nd bill :");
    scanf("%d",& B2);

    billsum=B1+B2;

    printf("\n sum of the given 2 bills %d+%d+=%d",B1,B2,billsum);

    getch();
    return 0;
}


