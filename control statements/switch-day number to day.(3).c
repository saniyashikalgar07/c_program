#include<stdio.h>
#include<conio.h>
int main()
{
int Day =0;
printf("\n Enter day number (1-7) to view day text ");
switch(Day)
{
case 1:
    printf("\n monday");
    break;

    case 2:
    printf("\n tuesday");
    break;

    case 3:
    printf("\n wednesday");
    break;

    case 4:
    printf("\n thursday");
    break;

    case 5:
    printf("\n friday ");
    break;

    case 6:
    printf("\n saturday");
    break;

    case 7:
        printf("\n sunday");
        break;

    default:
        printf("\n INVALIDE DAY");
        break;

}
printf("\n ==========================THANK YOU==================================");

    getch();
    return 0;
}


