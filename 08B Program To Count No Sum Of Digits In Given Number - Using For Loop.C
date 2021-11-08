#include<stdio.h>
#include<conio.h>

int main()
{
    int No=0,Temp=0,dSum=0,Dig=0;

    printf("\n Enter +ve Integer Number To Calculate Its Even Digits : ");
    scanf("%d",&No);

    Temp = No;

    if(No<0)
    {
        printf("\n Invalid Number ");return -1;
    }

    for(Temp = No;Temp>0;Temp/=10)
    {
        printf("\n %d + %d = %d",dSum,(Temp%10),(dSum+(Temp%10)));
        dSum += (Temp%10);
    }

    printf("\n\n Sum Of Digits In Given Number %d is = %d",No,dSum);

    getch();
    return 0;

}
