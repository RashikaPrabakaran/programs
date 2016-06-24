#include<stdio.h>
int main()
{
	int i,n,n1=0,n2=1,next=0;
	printf("enter the number of terms");
	scanf("%d",&n);
	printf("Fibonacci series are %d %d ",n1,n2);
	for(i=3;i<=n;i++)
	{
		next=n1+n2;
		printf("%d",next);
		n1=n2;
		n2=next;
	}
	return 0;
}