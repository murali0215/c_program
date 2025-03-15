/*
 * Name : Murali Gope
* Date : 26-01-2025
*program :
10) void strupr (char str[]);
// convert all lower case alphabets to upper case in the given string
Sample Input : 

Sample Output :

*/

#include<stdio.h>
void my_strlwr(char str[])
{
	int i=0;	
	while(str[i]!=0)
	{
		if(str[i]>='a' && str[i]<='z')
			str[i]=str[i]-32;
		i++;
	}
}
int main()
{
	char str[100];
	printf("Enter string:");
	scanf("%[^\n]s",str);
	my_strlwr(str);
	printf("string after modification: %s\n",str);
    return 0;
}

