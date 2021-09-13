#include<stdio.h>
#include<conio.h>

int main()
{
    int i=0,j=0,r=0,c=0;

    printf("\n Enter Value For Print Pattarn = ");
    scanf("%d%d",&r,&c);

    {
        for(i=1;i<=r;i++)
        {
            for(j=1;j<=c;j++)
            {
                if(i==1||j==1)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
            printf("\n");
        }
    }
    getch();
    return 0;
}
