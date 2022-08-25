#include <stdio.h>
#include <math.h>

int main()
{
    int num,a,b;
    
    printf("\tPRESS 1 FOR ADDITION\n");
    printf("\tPRESS 2 FOR SUBSTRACTION\n");
    printf("\tPRESS 3 FOR MULTIPLICATION\n");
    printf("\tPRESS 4 FOR DIVISION\n");
    printf("\tPRESS 5 to EXIT\n");
    printf("\tenter your choice here:");
    scanf(" %d",&num);
    switch(num)
    {
        case 1:
        printf("\t ENTER TWO NUMBERS YOU WANT SUM OF:");
        scanf("%d%d",&a,&b);
        printf("\nSUM OF TWO NUMBERS ENTERED BY YOU IS: %d+%d=%d",a,b,a+b);
        break;
        case 2:
        printf("\t ENTER TWO NUMBERS YOU WANT DIFFERENCE OF:");
        scanf("%d%d",&a,&b);
        printf("\nDIFFERENCE OF TWO NUMBERS ENTERED BY YOU IS: %d-%d=%d",a,b,a-b);
        break;
        case 3:
        printf("\t ENTER TWO NUMBERS YOU WANT PRODUCT OF:");
        scanf("%d%d",&a,&b);
        printf("\nPRODUCT OF TWO NUMBERS ENTERED BY YOU IS: %d*%d=%d",a,b,a*b);
        break;
        case 4:
        printf("\t ENTER TWO NUMBERS YOU WANT QUOTIENT OF:");
        scanf("%d%d",&a,&b);
        printf("\nQUOTIENT OF TWO NUMBERS ENTERED BY YOU IS: %d/%d=%d \n AND THEIR REMAINDER IS: %d",a,b,a/b,a%b);
        break;
        case 5:
        printf("Your program has ended.");
        break;
        
    }
    

    return 0;
}


