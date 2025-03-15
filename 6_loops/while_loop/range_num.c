#include<stdio.h>
int main()
{
	int n1,n2;
	printf("Enter 2 number:");
	scanf("%d %d", &n1, &n2);
	while ( n1 <= n2)
	{
		printf("%d ",n1);
		n1++;
	}
	printf("\n");
	return 0;
}
