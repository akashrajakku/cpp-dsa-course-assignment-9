#include<stdio.h>
int main()
{
   int n;
   float p;
    printf("Enter electricity unit  :\n");
    scanf("%f",&p);
    if(p>=1&&p<=50)
    n=1;
    if(p>=50&&p<=150)
    n=2;
    if(p>=150&&p<=250)
    n=3;
    if(p>=250)
    n=4;
    
    switch(n)
    {
        case 1:
        printf("Bill is %f",0.50*p);
        break;
        
         case 2:
        printf("Bill is %f",0.75*p);
        break;
         case 3:
        printf("Bill is %f",1.20*p);
        break;
        case 4:
        printf("Bill is %f",1.50*p);
        break;
    }
    
    return 0;
}