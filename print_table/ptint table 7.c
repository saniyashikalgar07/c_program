#include<stdio.h>
#include<conio.h>
int main()
{
int NO=7, i=1;
printf("\n table of %d is \n",NO);

while(i<=10)
{
    printf("\n %3d * %3d = %3d",NO,i,(i*NO));
    i++;

}
getch();
return 0;
}


