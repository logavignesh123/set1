#include<stdio.h>
void main()
{
    int a;
    printf("\n enter the days:");
    scanf("%d",&a);
    if(a%4==0)
    {
        if(a%100==0)
        {
            if(a%400==0)
            {
                printf("\n this is a leap year");
            }
            else
            printf("\n this is not a leap year");
        }
        else
        printf("\n this is a leap year");
    }
    else
    printf("\n this is not a leap year");
}
