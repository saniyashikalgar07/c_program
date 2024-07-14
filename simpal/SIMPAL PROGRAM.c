#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b;
    a=(2,3,4); /////bracket first priority is last left to right number ( means first priority is last number)

   b=2,3,4;/////////ans first priority is first number
    printf("\n %d ,%d",a,b);
    getch();
    return 0;
}
