//Program to Find Maximum And Minimum From 3 Inputted Numbers
#include<stdio.h>
#include<conio.h>

int main()
{
    int No=0,Min=0,Max=0,Cnt=0;

    printf("\n Enter 3 Numbers = ");

    for(Cnt=1;Cnt<=10;Cnt++)
    {
        printf("\n\t Enter Number %d = ",Cnt);
        scanf("%d",&No);

        if(Cnt==1)
            {
                Max=No;
                Min=No;
                continue;
            }
        if(No>Max)
            {
                Max=No;
            }
        if(No<Min)
            {
                Min=No;
            }
        printf("\n Press Any Key to Get Maximum And Minimum From Given Number = ");
        getche();

        printf("\n Maximum of Given Numbers =%d",Max);
        printf("\n Minimum of Given Numbers = %d",Min);

        getch();
        return 0;
    }
}
