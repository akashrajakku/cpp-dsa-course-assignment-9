#include<stdio.h>
int main()
{
   int p,n;
   printf("Enter an even number:\n");
   scanf("%d",&p);
    if(p%2==0)
    {
        n=1;
    }
    else
    {
        printf("INVALID ENTRY \n *Number entered by you is not even\n Kindly check your number again.");
    }
   
    switch(n)
    {
        case 1:
        printf("Upper nearest odd number is %d",p+1);
        break;
        
        
    }
    
    return 0;
}