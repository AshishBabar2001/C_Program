#include<stdio.h>
#include<conio.h>

int main()
{
    int i=0,j=0,c=0,Num=1;

    printf("\n Enter Value For Print Pattarn = ");
    scanf("%d",&c);

    {
        for(i=1;i<=c;i++)
        {
            for(j=1;j<=c;j++)
            {
            if(i>=j)
            {
                printf("%3d",Num);
                Num++;
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
