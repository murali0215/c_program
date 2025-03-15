#include<stdio.h>
int rem(int,int);
int main()
{
	int a,b,k;
	do
	{
		printf("enter two numbers:");
		scanf("%d%d",&a,&b);
		k=rem(a,b);
		if(k==0)
		{
			printf("anything divide with zero is undefiened,Please enter other value:");
		}
	}while(k==0);
	
	printf("reminder of %d and %d is: %d\n",a,b,k);
	return 0;
}
