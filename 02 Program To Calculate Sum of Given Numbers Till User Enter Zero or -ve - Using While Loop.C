//Program To Calculate Sum Of Given Till User Enter Zero or -ve Number
#include<stdio.h>
#include<conio.h>

int main()
{
   int No=0,Sum=0,Cnt=1;

   printf("\n Enter Number to Calculate Their Sum = \n ");

    while(true)
   {
       printf("\n \t Enter Number %d= ",Cnt);
       scanf("%d",&No);
       if(No<=0)
       {
           break;
       }

       Sum=Sum+No;
       Cnt++;
   }

   printf("\n Summation of Given Numbers = %d",Sum);

   getch();
   return 0;
}
