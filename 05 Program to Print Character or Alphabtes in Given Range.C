//Program to Print Character/Alphabtes in A To Y.C
#include<stdio.h>
#include<conio.h>

int main()
{
    char L_Char='/0',S_Char='\0',E_Char='\0';

    printf("\n Enter Starting Character = ");
    S_Char=getch();

    printf("\n Enter Ending Character = ");
    E_Char = getch();

     for(L_Char=S_Char;L_Char <= E_Char; L_Char++)
     {
         printf("\n %c",L_Char);
     }

     getch();
     return 0;

}
