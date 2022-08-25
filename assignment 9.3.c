   #include<stdio.h>
int main()
{
    int a,b,c,n,p,q,r;
    printf("enter three sides of a triangle:\n");
    scanf("%d %d %d",&a,&b,&c);
        p=a*a;
        q=b*b;
        r=c*c;
    printf("enter 1 for checking wheather sides are of isosceles triangle \n enter 2 for checking wheather sides are of right angled triangle \n enter 3 for checking wheather sides are of equilateral triangle");
    scanf("%d",&n);
    switch(n)
    {
        case 1:
        if(a==b||b==c||c==a)
        printf("\n IT IS ISOSCELES TRIANGLE");
        else
        printf("\n NOT AN ISOSCELES TRIANGLE");
        break;
        case 2:
        
        if((p=q+r)||(q=p+r)||(r=p+q))
        printf("\n IT IS RIGHT ANGLED TRIANGLE");
        else
        printf("\n NOT A RIGHT ANGLED TRIANGLE");
        break;
        case 3:
        if(a==b&&b==c&&c==a)
        printf("\n IT IS EQUILATERAL TRIANGLE");
        else
        printf("\n NOT AN EQUILATERAL TRIANGLE");
        break;
        
    }
    return 0;
}