//Number is Even or Odd - Using Ternary with is Ternary
#include<stdio.h>
#include<conio.h>

int main()
{
    int Num = 0;

    printf("\n Enter an Integer Number = ");
    scanf("%d",&Num);

    (Num == 0)? printf("\n Given Number is Nutral."):((Num % 2 == 0) ? printf("\n Given Number is Even."): printf("\n Given Number is Odd.") );

    getch();
    return 0;

}
