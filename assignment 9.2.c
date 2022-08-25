   #include<stdio.h>
int main()
{
    int daynum;
    printf("enter day number (for Monday 1,for Tuesday 2...,for Sunday 7):\n");
    scanf("%d",&daynum);
    switch(daynum)
    {
        case 1:
        printf("\n Welcome sir,on this beautiful Monday morning what would you like to have for lunch?");
        break;
        case 2:
        printf("\n  Welcome sir,on this beautiful Tuesday morning what would you like to have for lunch?");
        break;
        case 3:
        printf("\n  Welcome sir,on this beautiful Wednesday morning what would you like to have for lunch?");
        break;
        case 4:
        printf("\n  Welcome sir,on this beautiful Thursday morning what would you like to have for lunch?");
        break;
        case 5:
        printf("\n  Welcome sir,on this beautiful Friday morning what would you like to have for lunch?");
        break;
        case 6:
        printf("\n  Welcome sir,on this beautiful Saturday morning what would you like to have for lunch?");
        break;
        case 7:
        printf("\n  Welcome sir,on this beautiful Sunday morning what would you like to have for lunch?");
        break;
        
    }
    return 0;
}