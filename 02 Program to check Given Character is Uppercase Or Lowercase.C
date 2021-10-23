//Program to check Given Character is Uppercase Or Lowercase
#include<stdio.h>
#include<conio.h>

 int main()
 {
    char ch='\O';
    printf("\n Enter a Character to Check Wheather, \n It is Uppercase Or Lowercase = ");

    ch = getch();

    if((ch>='A')&&(ch<='Z'))
    {
        printf("\n\n Given Character Is Uppercase Letter.");
    }
    else if((ch>='a')&&(ch<='z'))
    {
        printf("\n\n Given Character Is Lowercase Letter.");
    }
    else
    {
        printf("\n\n Given Character Is Neighther Lowercase Nor Uppercase.");
    }
     getch();
     return 0;
 }
