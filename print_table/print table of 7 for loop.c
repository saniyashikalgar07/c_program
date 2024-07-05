#include<stdio.h>
#include<conio.h>
int main()
{
int NO=7,i=0;
printf("\n table of %d is ",NO);

for( i=1; i<=10; i++)
{
    printf("\n %3d * %3d = %3d",NO,i,(i*NO));
}
getch();
return 0;
}
