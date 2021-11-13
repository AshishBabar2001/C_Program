//Accept And Display Student Details
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    char Grade ='A';
    int R_No = 0;
    float Per = 0.0;
    char Name[50] = "";

    printf("\n Enter Student Details = ");

    printf("\n \t Enter Student Roll Number = ");
    scanf("%d",&R_No);

    printf("\n \t Enter Student Name = ");
    scanf("%S",&Name);

    printf("\n \t Enter Student Percentage = ");
    scanf("%f",&Per);

    printf("\n \t Enter Student Grade = ");
    scanf("%C",&Grade);

    system("cls");

    printf("\n\t\t Student Information \n ");

    printf("\n-------------------------------------------------\n");

    printf("\n\t Roll Number = %d.\n\t Name        = %s.\n\t Percentage  = %f.\n\t Grade       = %c",R_No,Name,Per,Grade);

    printf("\n------------------------------------------------\n");

    getch();
    return 0;

}
