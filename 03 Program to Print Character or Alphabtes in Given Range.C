//Program to Print Character/Alphabtes in A To Y.C
#include<stdio.h>
#include<conio.h>

int main()
{
    char Lch = '/0',Sch='\0',Ech='\0';

    printf("\n Enter Starting Character = ");
    Sch = getch();

    printf("\n Enter Ending Character = ");
    Ech = getch();

    if(Sch<Ech)
    {
        for(Lch=Sch;Lch<=Ech;Lch++)
        {
            printf("\n %c",Lch);
        }
    }
    else
    {
        for(Lch=Sch;Lch>=Ech;Lch++)
        {
            printf("\n %c",Lch);
        }
    }
     getch();
     return 0;

}
