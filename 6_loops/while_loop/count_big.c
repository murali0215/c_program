#include<stdio.h>
int main()
{
	int count=0, big, i=0, num,n;
	printf("Enter n number:");
	scanf("%d",&n);
	printf("Enter %d numbers:\n",n);
	scanf("%d",&big);
	while(i < n-1)
	{
		scanf("%d",&num);
		if( num > big)
			count++;
		big=num;
		i++;
	}
	printf("The count is %d\n",count);
	return 0;
}
