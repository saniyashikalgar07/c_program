#include<stdio.h>
#include<conio.h>
int main()
{
char ch='\0';
printf ("\n Enter a letter=");
scanf("%c",&ch);

switch (ch)
{

 case 'a':
 case 'A':
 case 'k':
 case 'd':
            printf ("\n Good");
            printf ("\n day");
            break;
 case 'F':
 case 'f':
 case 'R':
 case 'r':
             printf ("\n fork");
             break ;
 case 'h':
             printf ("\n home");
             break ;
defauit :
           printf ("\n INVALID INPUT");
           break ;

}
printf("\n =========================thank you======================\n");
getch();
return 0;
}


