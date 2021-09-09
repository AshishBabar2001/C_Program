// Maximum From 2Numbers - Using Ternary
#include<stdio.h>
#include<conio.h>

int main()
{
     int Num1=0,Num2=0;

     Grate:
         printf("\n Enter 2 Integer Numbers =");
         scanf("%d%d",&Num1,&Num2);

     if(Num1 == Num2)
     {
         printf("\n Both Given Numbers are Equal,\n Please Enter Diffrent Numbers To Compare.\n");
         goto Grate;
     }

     (Num1 > Num2)? print("\n Number %d is Maximum",Num1): print("\n Number %d is Maximum",Num2);

        printf("\n Thanks!!!");

        getch();
        return 0;

}
