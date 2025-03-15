/*
 * Name : Murali Gope
* Date : 26-01-2025
*program :
12) int palindrome (char str[])
// return 1 if the given string is a palindrome, return 0 if it is not a palindrome
Sample Input : 

Sample Output :

*/

#include<stdio.h>
#include<string.h>
int palindrome(char str[])
{
	int n=strlen(str);
	int j=n-1;
	int i=0;
	while(str[i]!=0)
	{
		if(str[i]>='A' && str[i]<='Z')
			str[i]=str[i]+32;
		i++;
	}
	for(int i=0;i<n/2;i++)
	{
		if(str[i]!=str[j-i])
			return 0;
	}
	if(n>0)
		return 1;
	return 0;
}

int main()
{
	char str[100];
	printf("Enter string:");
	scanf("%[^\n]s",str);
	int res=palindrome(str);
	if(res)
		printf("\"%s\" is palindrome\n",str);
	else
		printf("\"%s\" is not a palindrome\n",str);
    return 0;
}

