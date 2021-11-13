//Program to Find Maximum From 10 Inputted Numbers
#include<stdio.h>
#include<conio.h>

int main()
{
    int No=0,Max=0,Cnt=0;

    printf("\n Enter 10 Numbers = ");

    for(Cnt=1;Cnt<=10;Cnt++)
    {
        printf("\n Enter Number %d = ",Cnt);
        scanf("%d",&No);
        if(Cnt==1)
            {
                Max=No;
                continue;
            }
            {
                if(No>Max)
                {
                    Max=No;
                }
        printf("\n Press Any Key to Get Max From Given Number = ");
        getch();

        printf("\n Maximum of Given Numbers =%d",Max);
            }
            }
}
