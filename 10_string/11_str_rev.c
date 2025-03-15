/*
 * Name : Murali Gope
* Date : 26-01-2025
*program :
11) void strrev( char str[]);

//reverse the string (without using any extra array)
eg., input : str[] = "Kernel";
output : str[] = "lenreK"
*/

#include<stdio.h>
#include<string.h>
void my_str_rev(char str[])
{
	int n=strlen(str);
	int j=n-1;
	for(int i=0;i<n/2;i++)
	{
		str[i]=str[i]+str[j-i];
		str[j-i]=str[i]-str[j-i];
		str[i]=str[i]-str[j-i];
	}
}
int main()
{
	char str[100];
	printf("Enter string:");
	scanf("%[^\n]s",str);
	my_str_rev(str);
	printf("string after modification: %s\n",str);
    return 0;
}
