#include<stdio.h>
#include<conio.h>
int main()
{
int NO=0,i=1;
 printf("\n Enter a number to get reverse table :");
 scanf("%d",&NO);

 printf("\n Reverse table of %d is  \n",NO);

 for(i=10; i>=1; i--)
 {
     printf("\n %3d * %3d = %3d",NO,i,(i*NO));
 }
 printf("\n ==================THANK YOU========================");
 getch();
 return 0;
}
