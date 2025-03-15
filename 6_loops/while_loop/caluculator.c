#include<stdio.h>
int main()
{
	int n,n1,n2;
	char ch;
	printf("Enter n number:");
	scanf("%d",&n);
	while(n)
	{
		printf("Enter two numbers\n");
		scanf("%d %d",&n1,&n2);
		printf("Enter character: +, -, *, /, %%\n");
		getchar();
		scanf("%c",&ch);
		if ( ch == '+')
			printf("Result of %d + %d is %d\n", n1, n2, n1 + n2);
		else if ( ch == '-')
			printf("Result of %d - %d is %d\n", n1, n2, n1 - n2);
		else if ( ch == '*')
			printf("Result of %d * %d is %d\n", n1, n2, n1 * n2);
		else if ( ch == '/')
			printf("Result of %d / %d is %d\n", n1, n2, n1 / n2);
		else if ( ch == '%')
			printf("Result of %d %% %d is %d\n", n1, n2, n1 % n2);
		else{
			printf("Enter a valid operator and enter the number again\n");
			getchar();
			continue;
		}
		n--;
	}
	return 0;
}
