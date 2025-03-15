/*
Enter character:2
2 is not a alphabet

Enter character:u
u is a alphabet

Enter character:A
A is a alphabet
*/

#include<stdio.h>
int main(){
	char c;
	printf("Enter character:");
	scanf("%c",&c);
	if (c >= 65 && c <= 90)
	{
		printf("%c is a alphabet\n",c);
	}
	else if ( c >= 90 && c <= 122) {
		printf("%c is a alphabet\n",c);
	}
	else{
		printf("%c is not a alphabet\n",c);
	}
	return 0;
}
