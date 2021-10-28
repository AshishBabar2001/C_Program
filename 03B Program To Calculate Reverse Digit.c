#include<stdio.h>
#include<conio.h>

int main()
{
    int No=0,Temp=0,dRev=0;

    printf("\n Enter +ve Integer Number To Calculate Its Reverse : ");
    scanf("%d",&No);

    Temp = No;

    if(No<0)
    {
        printf("Invalid Number"); return -1;
    }

    while(Temp>0)
    {
        dRev = (dRev*10)+(Temp%10);
        Temp = Temp/10;
    }

    printf("\n Sum of Digits In Given Number %d is = %d",No,dRev);

    getch();
    return 0;

}
