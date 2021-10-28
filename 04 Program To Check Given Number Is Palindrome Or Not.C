#include<stdio.h>
#include<conio.h>

int main()
{
    int No=0,Temp=0,dRev=0;

    printf("\n Enter +ve Integer Number To Calculate Its Palindrome : ");
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

    if(No==dRev)
    {
        printf("\n Given No Is Palindrome ",No);
    }
    else
    {
        printf("\n Given No Is Not Palindrome ",No);
    }

    getch();
    return 0;

}
