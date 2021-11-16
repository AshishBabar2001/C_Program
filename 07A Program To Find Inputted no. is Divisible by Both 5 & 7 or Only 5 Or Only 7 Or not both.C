//Program To Find Inputted no. is Divisible by Both 5 & 7 or Only 5 Or Only 7 Or not both.
#include<stdio.h>
#include<conio.h>

int main()
{
    int Num=0;

    printf("\n Enter Number = ");
    scanf("%d",&Num);

    if((Num % 5 == 0)&&(Num % 7 == 0))
    {
        printf("\n Number Is Divisible by Both = ");
    }
    else if(Num % 5 == 0)
    {
        printf("\n Number is Divisible By 5.");
    }
    else if(Num % 7 == 0)
    {
        printf("\n Number is Divisible By 7.");
    }
    else
    {
        printf("Number is Not Divisible By Both.");
    }

    getch();
    return 0;
}
