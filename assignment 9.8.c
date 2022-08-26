#include<stdio.h>
int main()
{
   int p,n;
   printf("Enter a number(positive as well as negative)  :\n");
   scanf("%d",&p);
    if(p>0)
    n=1;
   else if(p<0)
    n=2;
    else
    n=3;
    
    switch(n)
    {
        case 1:
        printf("%d",(-1*p));
        break;
        
         case 2:
        printf("%d",(-1*p));
        break;
         case 3:
        printf("0");
        break;
        
    }
    
    return 0;
}