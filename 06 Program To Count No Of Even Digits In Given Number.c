#include<stdio.h>
#include<conio.h>

int main()
{
    int No=0,Temp=0,ECnt=0,Dig=0;

    printf("\n Enter +ve Integer Number To Calculate Its Even Digits : ");
    scanf("%d",&No);

    Temp = No;

    if(No<0)
    {
        printf("\n Invalid Number ");return -1;
    }

   while(Temp > 0)
   {
       Dig = Temp % 10;
       if(Dig % 2 == 0)
       {
           ECnt++;
       }
       Temp = Temp / 10;
   }

    printf("\n Count Of Even Digits In Given Number %d is = %d",No,ECnt);

    getch();
    return 0;

}
