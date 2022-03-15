#include<stdio.h>
main()
{
    int n1,n2,temp;

    n1 = 23;
    n2 = 45;

    printf("\nNumber Before Swapping \n n1 = %d \n n2 = %d",n1,n2);

    temp = n1;
    n1 = n2;
    n2 = temp;
    printf("\nNumber After Swqapping \n n1 = %d \n n2 = %d",n1,n2);
}
