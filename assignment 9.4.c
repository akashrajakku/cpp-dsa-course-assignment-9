#include<stdio.h>
int main()
{
    int monthnum;
    printf("enter month number (for january 1,for february 2...,for december 12):\n");
    scanf("%d",&monthnum);
    switch(monthnum)
    {
        case 1:
        printf("\n 31 DAYS");
        break;
        case 2:
        printf("\n 28 DAYS");
        break;
        case 3:
        printf("\n 31 DAYS");
        break;
        case 4:
        printf("\n 30 DAYS");
        break;
        case 5:
        printf("\n 31 DAYS");
        break;
        case 6:
        printf("\n 30 DAYS");
        break;
        case 7:
        printf("\n 31 DAYS");
        break;
        case 8:
        printf("\n 31 DAYS");
        break;
        case 9:
        printf("\n 30 DAYS");
        break;
        case 10:
        printf("\n 31 DAYS");
        break;
        case 11:
        printf("\n 30 DAYS");
        break;
        case 12:
        printf("\n 31 DAYS");
        break;
    }
    return 0;
}