/*
Q8.
Write a function to determine if a character is alphanumeric or not and print the appropriate output in main function. (return 1 if it is alphanumeric, 0 if it is not alpha numeric).
Hint: int fun_alpha_num(char c).

*/

#include <stdio.h>
int fun_alpha_num(char c);

int main()
{
	char ch;
	int Res;
	printf("Enter the character: ");
	scanf("%c",&ch);
	Res = fun_alpha_num(ch);
	if(Res == 1)
		printf("Given character is alphanumeric\n");
	else 
		printf("Given character is not alphanumeric\n");
}

int fun_alpha_num(char Res)
{

	if((Res>='A' && Res<='Z') || (Res>='a' && Res<='z') ||(Res>='0' && Res<='9'))
		return 1;
	else
		return 0;
}
