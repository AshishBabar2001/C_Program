#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define size 10

int main()
{
    int Arr[size] = {},i = 0,Src_Ele = 0,Ele_Cnt = 0;

    printf("\n Enter Array Element = \n\n");

    for(i=0;i<size;i++)
    {
        printf("\n Enter Element[%d] = ",i+1);
        scanf("%d",&Arr[i]);
    }

    for(i=0;i<size;i++)
    {
        printf("\n Value Of Element %d = %d",i+101,Arr[i]);
    }
    printf("\n Press Any Key To Continue :- ");
    getch();

    system("cls");

    printf("\n Enter Element To Search In Array = ");
    scanf("%d",&Src_Ele);

    for(i=0;i<size;i++)
    {
        if(Arr[i] == Src_Ele)
        {
            Ele_Cnt++;
        }

    }

    printf("\n Count Of Element %d In Given Array Is = %d",Src_Ele,Ele_Cnt);

    getch();
    return 0;
}
