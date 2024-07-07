#include<stdio.h>
#include<conio.h>
int main()
{
char Spt='\0',Ept='\0';

printf("\n Enter start point :");
scanf("%c",&Spt);
printf("\n Enter End point :");
scanf("%c",&Ept);

printf("\n Given letter from %c to %c is\n ",Spt,Ept);

if(Spt<=Ept)
   {
       while (Spt<=Ept)
        {
            printf("\n %c",Spt);
            Spt++;
        }
   }
   else
    while(Spt>=Ept)
   {
       printf("\n %c",Spt);
       Spt--;
   }
   printf("\n\n ========================THANK YOU============================");
   getch();
   return 0;
}

