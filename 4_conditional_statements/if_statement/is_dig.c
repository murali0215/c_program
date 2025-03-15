/*
Enter character:4
4 is a digit

Enter character:f
f is not a digit
*/

#include<stdio.h>
int main(){
	char c;
	printf("Enter character:");
	scanf("%c",&c);
	if ( c >= '0' && c <= '9'){

		printf("%c is a digit\n",c);
	}
	else{
		printf("%c is not a digit\n",c);
	}
	return 0;
}  
