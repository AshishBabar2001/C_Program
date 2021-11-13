//Program to Find Minimum From 10 Inputted Numbers
#include<stdio.h>
#include<conio.h>

int main()
{
    int No=0,Min=0,Cnt=0;

    printf("\n Enter Numbers = ");

    for(Cnt=1;Cnt<=10;Cnt++)
    {
        printf("\n Enter Number %d = ",Cnt);
        scanf("%d",&No);

        if(Cnt==1)
            {
                Min=No;
                continue;
            }
            {
                if(No<Min)
                {
                    Min=No;
                }
        printf("\n Press Any Key to Get Min From Given Number = ");


        printf("\n Maximum of Given Numbers =%d",Min);
            }
            }
        getch();
}
