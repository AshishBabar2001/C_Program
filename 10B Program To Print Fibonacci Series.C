//Program To Print Fiboncci Series.
#include<stdio.h>
#include<conio.h>

int main()
{
    int No1 =1, No2 =0, No3 =0, cnt =0;

    printf("\n Enter Count For Fibonacci Series =");
    scanf("%d",&cnt);

    printf("\n Fibonacci Series For Given Count =");

    for(No1=1;cnt>0;cnt--)
    {
        printf("%d",&No3);

        No3 = No1+No2;
        No1 = No2;
        No2 = No3;

    }

    getch();
    return 0;

}
