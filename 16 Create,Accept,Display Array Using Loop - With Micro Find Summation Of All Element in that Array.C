#include<stdio.h>
#include<conio.h>
#define size 10

int main()
{
    int No[size]={0},Sum = 0,Ecnt = 0;

    printf("\n Enter 10 Numbers = ");

    for(Ecnt = 0 ;Ecnt < size;Ecnt++)
    {
        printf("\n Enter Element Number  %d = ",Ecnt+1);
        scanf("%d",&No[Ecnt]);

        Sum = Sum + No[Ecnt];
    }

    printf("\n Summantion Of Given & Numbers = \n ");

    for(Ecnt=0 ; Ecnt < size ; Ecnt++)
    {
        printf("%d +",No[Ecnt]);
    }

    printf("\b\b = %d",Sum);

    getch();
    return 0;
}
