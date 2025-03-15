#include<stdio.h>
int main()
{
	int n1,n2;
	printf("Enter two numbers:");
	scanf("%d %d",&n1,&n2);
	while(n2 >= n1)
	{
		printf("%d ",n2);
		n2--;
	}
	printf("\n");
	return 0;
}
