#include<stdio.h>
int main()
{
	int a,b,temp;
	printf("enter the value of a and b");
	scanf("%d %d",&a,&b);
	printf("values of a and b before swapping are %d %d \n",a,b);
	temp=a;
	a=b;
	b=temp;
	printf("values of a and b after swapping are %d %d",a,b);
	return 0;
}