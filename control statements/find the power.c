#include<stdio.h>
#include<conio.h>
int main()
{
int N1=0, N2=0, Pow=1, i=1;
printf("\n Enter a base :");
scanf("%d",&N1);
printf("\n Enter a exponent :");
scanf("%d",&N2);
while(i<=N2)
{
    Pow = Pow * N1;
    i++;
}
printf("\n power %d raise to %d-%d",N1,N2,Pow);
getch();
return 0;
}
