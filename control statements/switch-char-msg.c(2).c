#include<stdio.h>
#include<conio.h>
int main ()
{
char ch='\o';
printf ("\n Enter a letter=");
scanf("%c",&ch);
switch (ch)
{

case 'a':
    printf("\n Good");
    break;
case 'A' :
    printf("\n Good");
    break;
case 'p':
    printf("\n Good");
    break;
case 'k' :
    printf("\n Good");
    break;
case 'F':
    printf("\n fork");
    break;
case 'f':
    printf("\n fork");
    break;
case 'r':
    printf("\n fork");
    break;
default :
    printf("\n INVALID INPUT");
    break;
}
printf("\n ================================THANK YOU================================");
getch();
return 0;
}

