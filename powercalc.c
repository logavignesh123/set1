#include <stdio.h>
#include<math.h>
int main() 
{
	int pw,num,ans;
	printf("enter the number and  power :\n");
	scanf("%d %d ",&num,&pw);
	ans = pow(num,pw);
	printf("\nthe power is :%d",ans);
	return 0;
}
