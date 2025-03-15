#include<stdio.h>
int main()
{
	int percentage;
	printf("Enter the percentage:");
	scanf("%d",&percentage);
	switch (percentage)
	{
		case 80 ... 100:printf("Honour\n");
				break;
		case 60 ... 79: printf("First division\n");
				break;
		case 50 ... 59: printf("Second divison\n");
				break;
		case 40 ... 49: printf("Third divison\n");
				break;
		case 0 ... 39: printf("fail\n");
	}
	return 0;
}
