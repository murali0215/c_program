/*program to return the value of product without using * operator */
#include<stdio.h>
int product(int a,int b);
int main()
{
	int a,b,k;
	printf("enter two numbers:");
	scanf("%d%d",&a,&b);
	k=product(a,b);
	printf("Product of %d and %d is:%d\n",a,b,k);
	return 0;
}

