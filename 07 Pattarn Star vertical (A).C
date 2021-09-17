#include<stdio.h>
#include<conio.h>

int main()
{
    int i=0,j=0,r=7,c=5;

        for(i=1;i<=r;i++)
        {
            for(j=1;j<=c;j++)
            {
                if(i==1||j==1||i==r||j==c)
                {
                    printf(" * ");
                }
                else
                {
                    printf(" ");
                }
            }
            printf("\n");
        }
    getch();
    return 0;
}
