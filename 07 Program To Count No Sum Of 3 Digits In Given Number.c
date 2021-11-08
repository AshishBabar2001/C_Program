#include<stdio.h>
#include<conio.h>

int main()
{
    int No=0,Temp=0,dCnt=0,Dig=0,dSum=0;

    printf("\n Enter +ve Integer Number To Calculate Its Even Digits : ");
    scanf("%d",&No);

    Temp = No;

    if(No<0)
    {
        printf("\n Invalid Number ");return -1;
    }

   while(Temp > 0)
   {
       dCnt++;
       Temp = Temp / 10;
   }
   if(dCnt == 3)
   {
       Temp = No ;

       while(Temp > 0)
       {
           Dig = Temp % 10;
           dSum = dSum + Dig;
           Temp = Temp / 10;
       }
       printf("\n Sum Of Digits In Given Number %d is = %d",No,dSum);
   }
   else
   {
       printf("\n Given Number Is Not 3 Digit Number ");
   }

    getch();
    return 0;

}
