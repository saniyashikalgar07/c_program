#include<stdio.h>
#include<conio.h>
int main()
{
char ch ='\o';
printf("\n Enter a character:");
scanf("%c",&ch);
if((ch>='A') && (ch<='Z'))
{
    printf("\n Enter a given letter %c is UPPERCASE",ch);
}
else if((ch>='a') && ( ch<='z'))

{
    printf("\n Enter a given letter %c is LOWERCASE",ch);
}
else
{
    printf("\n other ");
}
printf("\n =============================THANK YOU=============================");
getch();
return 0;
}

