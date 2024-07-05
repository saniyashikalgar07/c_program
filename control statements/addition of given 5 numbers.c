#include<stdio.h>
#include<conio.h>
int main()
{
    int N1=0, N2=0, N3=0,N4=0,N5=0,SUM=0;
    printf("\n Enter number 1= ");
    scanf("%d",&N1);
    printf("\n Enter number 2= ");
    scanf("%d",&N2);
    printf("\n Enter number 3= ");
    scanf("%d",&N3);
    printf("\n Enter number 4= ");
    scanf("%d",&N4);
    printf("\n Enter number 5= ");
    scanf("%d",&N5);

    SUM=N1+N2+N3+N4+N5;

    printf("\n Addition of %d,%d,%d,%d,%d=%d",N1,N2,N3,N4,N5,SUM);

    getch();
    return 0;
}

