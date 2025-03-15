/*
 * Name : Murali Gope
* Date : 25-01-2025
*program :
5). "Write a program to convert a string into lower case and print.
eg., input : Hello
output : hello"
*/
#include<stdio.h>

int main()
{
	char str[100];
	printf("Enter string:");
	scanf("%[^\n]s",str);
	int i=0;
	while(str[i]!=0)
	{
		if(str[i]>='A' && str[i]<='Z')
			str[i]=str[i]+32;
		i++;
	}
	printf("%s\n",str);
    return 0;
}


