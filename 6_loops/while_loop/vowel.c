#include<stdio.h>
int main()
{
	int n;char ch;
	printf("Enter the n:");
	scanf("%d",&n);
	while(n){
		printf("Enter the character:");
		getchar();
		scanf("%c",&ch);
		if( ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'u')
		{
			printf("The given character '%c' is a vowel\n",ch);
		}
		else
		{
			printf("The given character '%c' is not a vowel\n",ch);
		}
		n--;
	}
	return 0;
}
