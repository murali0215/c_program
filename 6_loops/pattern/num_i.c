#include<stdio.h>
int main()
{
	int n;
	printf("Enter n:");
	scanf("%d",&n);
	int i=1,j;
	while(i<=n)
	{
		j=0;
		while(j<i)
		{
			printf("%d",i);
			j++;
		}
		printf("\n");
		i++;
	}
	return 0;
}
