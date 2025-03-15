#include<stdio.h>
int main()
{
	int i,x,n;
	printf("Enter n number:");
	scanf("%d",&n);
	while(n)
	{
		printf("Enter x number:");
		scanf("%d",&x);
		i=1;
		while( i<= 10)
		{
			printf("%d*%d=%d\n",x,i,x*i);
			i++;
		}
		n--;
	}
	return 0;
}
