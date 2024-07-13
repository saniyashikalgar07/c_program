#include<stdio.h>
#include<conio.h>
int main()
{
    int m=20;
    int n,n1;
    n=++m;
    n1=m++;
    n--;
    --n1;
    n=n-n1;
    printf("\n %d",n);
    getch();
    return 0;
}

