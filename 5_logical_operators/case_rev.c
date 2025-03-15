#include<stdio.h>
int main(){
	char ch;
	printf("Enter character");
	scanf("%c",&ch);
	if (ch >= 65 && ch <= 90){
		printf("%c\n",ch+32);
	}
	else if ( ch >= 97 && ch <= 122) {
		printf("%c\n",ch-32);
	}
	else {
		printf("Not Alphabet\n");
	}
	return 0;
}
