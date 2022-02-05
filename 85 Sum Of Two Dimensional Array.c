#include<stdio.h>
main()
{
    int arr1[100][100],arr2[100][100],arr3[100][100],i,j,Rows,Cols;

    printf("\n Enter Number of Rows And Cols : ");
    scanf("%d %d",&Rows,&Cols);

    printf("\n Enter Element for %d & %d Matrix1 : \n",Rows,Cols);
    for(i = 0 ; i < Rows ; i++)
    {
        for(j = 0 ; j < Cols ; j++)
        {
            scanf("%d",arr1[i][j]);
        }
    }
    printf("\n Enter Elements For %d * %d Matrix2 : \n",Rows,Cols);
    for(i = 0 ; i < Rows ; i++)
    {
        for(j = 0 ; j < Cols ; j++)
        {
            scanf("%d",&arr2[i][j]);
            arr3[i][j]=arr1[i][j]+arr2[i][j];
        }
    }
    printf("\n Matrix : ");
    for(i = 0 ; i< Rows ; i++)
    {
        for(j = 0 ; j < Cols ; j++)
        {
            printf("%d",arr3[i][j]);
        }
        printf("\n");
    }

}
