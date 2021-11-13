//Program To Calculate Sum Of Given Till User Enter Zero or -ve Number - Using Goto Statement
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
   int No=0,Sum=0,Cnt=1;

   printf("\n Enter Number to Calculate Their Sum = ");
   Up:
       printf("\n \t Enter Number %d= ",Cnt);
       scanf("%d",&No);

       if(No<=0)
       {
          goto Out;
       }

       Sum = Sum+No;
       Cnt++;

       goto Up;

       Out:

   printf("\n Summation of Given Numbers = %d",Sum);

   getch();
   return 0;
}
