#include<stdio.h>
#include<conio.h>
int main()
{
int NO=0, i=1;

printf("\n Enter a number of the reverse table: ");
scanf("%d",&NO);
printf("\n reverse table of the %d is \n",NO);

for(i=10; i>=1; i--)

{
    printf("\n %3d,%3d=%3d",NO,i ,(i*NO));

}
getch();
return 0;
}

