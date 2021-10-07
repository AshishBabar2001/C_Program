#include<stdio.h>
#include<conio.h>

int main()
{
    int i=0,j=0,c=0,Num=0,Temp=0;

    printf("\n Enter Value For Print Pattarn = ");
    scanf("%d",&c);

    printf("\n Enter a Number To Get its Table in Pattarn = ");
    scanf("%d",&Num);

    Temp=Num;
    {
        for(i=1;i<=c;i++)
        {
            for(j=1;j<=c;j++)
            {
            if(i>=j)
            {
                printf("%-3d",Num);
                Num = Num+Temp;
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
