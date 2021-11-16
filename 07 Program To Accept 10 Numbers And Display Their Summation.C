//Program To Accept 10 Numbers And Display Their Summation
#include<stdio.h>
#include<conio.h>

int main()
{
   int No=0,Sum=0,Cnt=0;

   printf("\n Enter 10 Numbers = ");

   for(Cnt=1;Cnt<=10;Cnt++)
   {
       printf("\n\t Enter Number %d = ",Cnt);
       scanf("%d",&No);

       Sum = Sum + No;
   }
   printf("\n Summation of Given Number = %d ",Sum);

    getch();
    return 0;

}
