// Maximum From 2Numbers - Using Ternary
#include<stdio.h>
#include<conio.h>

int main()
{
    int Num1 = 0, Num2 = 0 ;
    printf("\n Enter 2 Integer Numbers = ");
    scanf("%d%d",&Num1&Num2);

    (Num1 == Num2)?Printf("\n Both Given Numbers Are Equal"):(Num1>Num2)?Printf("\n Number %d is Maximum",Num1):printf("\n Number %d is Maximum",Num2");

    printf("\n Thanks!!!");
    getch();
    return 0;
}
