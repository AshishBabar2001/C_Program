//Program To Print Table From 5 To 10
#include<stdio.h>
#include<conio.h>

int main()
{
   int No=0,Sum=0,Cnt=0;

   printf("\n Enter Number to Calculate Their Sum = \n ");

   for(Cnt=1; ;Cnt++)
   {
       printf("\n \t Enter Number %d=",Cnt);
       scanf("%d",&No);
       if(No<=0)
       {
           break;
       }

       Sum=Sum+No;

   }

   printf("Enter Any Key to Summation");
   getch();
   return 0;
}
