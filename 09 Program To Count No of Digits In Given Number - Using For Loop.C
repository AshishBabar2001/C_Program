#include<stdio.h>
#include<conio.h>

int main()
{
    int No=0,Temp=0,dCnt=0,Dig=0;

    printf("\n Enter +ve Integer Number To Calculate Its Even Digits : ");
    scanf("%d",&No);

    Temp = No;

    if(No<0)
    {
        printf("\n Invalid Number ");return -1;
    }

    for(Temp = No;Temp>0;Temp/=10,dCnt++);

    printf("\n\n Sum Of Digits In Given Number %d is = %d",No,dCnt);

    getch();
    return 0;

}
