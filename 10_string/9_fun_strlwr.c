/*
 * Name : Murali Gope
* Date : 26-01-2025
*program :
9)  void strlwr( char str[]);
// convert all upper case alphabets to lower case in the given string
Sample Input : 

Sample Output :

*/

#include<stdio.h>
void my_strlwr(char str[])
{
	int i=0;	
	while(str[i]!=0)
	{
		if(str[i]>='A' && str[i]<='Z')
			str[i]=str[i]+32;
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

