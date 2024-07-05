
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
else if (ch>='o'&&ch<='9')
{
    printf("\n given letter %c is digit",ch);
}
else
{
    printf("\n Enter a given letter <%c> is special symbol",ch);
}

getch();
return 0;
}
