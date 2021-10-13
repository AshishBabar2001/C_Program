#include<stdio.h>
#include<conio.h>

int main()
{
    int Arr[7]={5};
    int i = 0;

    for(i=0;i<7;i++)
    {
        printf("\n Value Of RollNo %d = %d.\n",i+101,Arr[i]);
    }

    for(i=0;i<7;i++)
    {
        printf("\n Enter Element [%d] To Display Array = ",i+101);
        scanf("%d",&Arr[i]);
    }

    printf("\n Value of Array Elements Are :- ");

    for(i=0;i<7;i++)
    {
       printf("\n Value of 101 Element %d = %d.",i+101,Arr[i]);
    }

    getch();
    return 0;
}
