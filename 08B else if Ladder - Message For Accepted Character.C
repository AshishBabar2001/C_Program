//Program To Accept Value & Its Corresponding Character
#include<stdio.h>
#include<conio.h>

int main()
{
    char ch='\0';

    printf("\n Enter a Number to View Day Text = ");
    ch = getche();

    if(ch=='A'||ch=='a')
    {
        printf("\n Welcome ");
    }
    else if(ch=='B'||ch=='b')
    {
        printf("\n Have Nice Day");
    }
    else if(ch=='C'||ch=='c')
    {
        printf("\n Have Good Day");
    }
    else if(ch=='D'||ch=='d')
    {
        printf("\n Good Bye");
    }
    else
    {
        printf("\n There is No Message For Such Character");
    }

    getch();
    return 0;

}
