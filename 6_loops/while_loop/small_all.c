#include<stdio.h>
int main()
{
	int small,i=0,num,n;
	printf("Enter n number:");
	scanf("%d",&n);
	printf("Enter the %d numbers\n",n);
	scanf("%d",&small);
	while(i<n-1)
	{
		scanf("%d",&num);
		if ( num < small)
		{
			small=num;
		}
		i++;
	}
	printf("The smallest number is %d\n",small);
	return 0;
}
