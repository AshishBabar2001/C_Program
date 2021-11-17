//Swapping Of Two Numbers.
#include<stdio.h>
#include<conio.h>

int main()
{
    int Num1 = 0,Num2 = 0,Temp = 0;

    Up:

    printf("\n Enters Two Numbers For Swapping = ");
    scanf("%d%d",&Num1,&Num2);

    printf("\n Before Swap 1st Number = %d",Num1);
    printf("\n Before Swap 2nd Number = %d \n\n",Num2);

    Temp=Num1;
    Num1=Num2;
    Num2=Temp;

    printf("\n After Swap 1st Number = %d",Num1);
    printf("\n After Swap 2nd Number = %d",Num2);

    goto Up;

    getch();
    return 0;
}
