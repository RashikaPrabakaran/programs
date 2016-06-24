#include<stdio.h>
int main()
{
	int rem,num,rev=0,n;
	printf("enter the number");
	scanf("%d",&n);
	num=n;
	while(n!=0)
	{
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
	}
	if(num==rev)
	printf("%d is a palindrome number",num);
	else
	printf("%d is not a palindrome number",num);
	return 0;
}
	