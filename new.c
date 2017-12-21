#include<stdio.h>
void main()
{
    int a;
    printf("\n enter the input");
    scanf("%d",&a);
    if(a>0)
    {
        printf("\n the number is positive");
        
    }
    else if (a<0)
    {
        printf("\n the number is negative ");
    }
    else if(a==0)
    {
        printf("\n the input is zero");
    }
}
