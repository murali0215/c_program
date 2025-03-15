#include<stdio.h>
int main()
{
	int n1,n2,temp;
	printf("Enter two number:");
	scanf("%d %d", &n1, &n2);
	temp = n1;
	printf("Even number:");
	while ( temp <= n2)
	{
		if( temp % 2 == 0)
			printf("%d ",temp);
		temp++;
	
	}
	printf("\nodd number:");
	while ( n1 <= n2 )
	{
		if ( n1 % 2 != 0)
			printf("%d ",n1);
		n1++;
	}
	return 0;
}
