#include<stdio.h>
#include<conio.h>

int main()
{
    int No=0,Temp=0,ZCnt=0;

    printf("\n Enter +ve Integer Number To Calculate Its Digits of Zero : ");
    scanf("%d",&No);

    Temp = No;

    if(No<0)
    {
        printf("\n Invalid Number ");return -1;
    }

    while(Temp>0)
    {
        if(Temp % 10 == 0)
        {
            ZCnt++;
        }
        Temp /= 10;
    }

    printf("\n Count Of Zeros In Given Number %d is = %d",No,ZCnt);

    getch();
    return 0;

}
