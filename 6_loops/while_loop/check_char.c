#include<stdio.h>
int main()
{
	int n;
	char ch;
	printf("Enter the n:");
	scanf("%d",&n);
	while(n)
	{
		getchar();
		printf("Enter the a character:");
		scanf("%c",&ch);
		if ( ch >='a' && ch <= 'z')
		{
			printf("The given character '%c' is a small alphabet\n",ch);
		}
		else if ( ch >= 'A' && ch <= 'Z' )
		{
			printf("The given character '%c' is a capital alphabet\n",ch);
		}
		else if ( ch >= '0' && ch <= '9' )
		{
			printf("The given character '%c' is a numeric\n",ch);
		}
		else 
		{
			printf("The given character '%c' is a special character\n",ch);
		}
		n--;
	}
	return 0;
}
