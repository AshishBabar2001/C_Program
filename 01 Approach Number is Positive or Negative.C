//Number is Positive Or Negative
#include<stdio.h>
#include<conio.h>

int main()
{
    int Num = 0;

    printf("\n Enter an Integer Number = ");
    scanf("%d",&Num);

    if(Num>0)
    {
        printf("\n Given Number is +ve.");
    }
    else
    {
        printf("\n Given Number is -ve.");
    }

    getch();
    return 0;

}
