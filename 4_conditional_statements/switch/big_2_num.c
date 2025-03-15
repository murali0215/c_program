#include<stdio.h>
int main()
{
	int a,b;
	printf("enter 2 number:");
	scanf("%d %d",&a,&b);
	switch (a>b)
	{
		case 1: printf("%d is biggest\n",a);
			break;
		case 0:printf("%d is biggest\n",b);
	}
	return 0;
}
