#include<stdio.h>
int main()
{
    int a,b,c,largest;
    printf("\n enter the input");
    scanf("%d %d %d",&a,&b,&c);
    if(b>a)
    {
        largest=b;
    }
    if(c>b)
    {
        largest=c;
    }    
    printf("\n the largest number is %d",largest);
    return 0;
}
