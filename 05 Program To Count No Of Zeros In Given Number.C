#include<stdio.h>
#include<conio.h>

int main()
{
    int No=0,Temp=0,ZCnt=0, Dig=0;

    printf("\n Enter +ve Integer Number To Calculate Its Zeros Digits : ");
    scanf("%d",&No);

    Temp = No;

    if(No<0)
    {
        printf("\n Invalid Number ");return -1;
    }

    while(Temp>0)
    {
        Dig = Temp % 10;
        if(Dig == 0)
        {
            ZCnt++;
        }
        Temp = Temp /10;
    }

    printf("\n Count Of Zeros In Given Number %d is = %d",No,ZCnt);

    getch();
    return 0;

}
