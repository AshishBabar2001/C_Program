//Program To Print Fiboncci Series.
#include<stdio.h>
#include<conio.h>

int main()
{
    No1=1, No2=0, No3=0,cnt=0;

    printf("\n Enter Count For Fibonacci Series =");
    scanf("%d",&cnt);

    Printf("\n Fibonacci Series For = ");

    while(cnt>0)
    {

        printf("%d",&No3);

        No3 = No1+No2;
        NO1 = No2;
        NO2 = No3;

    }
    getch();
    return 0;

}
