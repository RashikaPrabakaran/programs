#include<stdio.h>
int main()
{
	int rev=0,n;
	printf("enter the number");
	scanf("%d",&n);
	while(n!=0)
	{
		rev=rev*10;
		rev=rev+n%10;
		n=n/10;
	}
	printf("reverse of the number is %d",rev);
	return 0;
}
	