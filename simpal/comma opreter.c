#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c,d;
    d=(a=2,b=3,c=5,a+b+c);///////bracket first priority is left to right number (means first priority is last number)
    printf("\n result %d",d);
    getch();
    return 0;
}
