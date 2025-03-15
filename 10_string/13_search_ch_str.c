/*
 * Name : Murali Gope
* Date : 26-01-2025
*program :
13) int strchr( char str[], char ch)
// search the character ch ,in string str , whenever the first matching occurs, return the matching index. 

Sample Input : 
Enter string: hello world
Enter character:d

Sample Output :
index of char:10

*/

#include<stdio.h>
int search(char str[],char ch);
int main()
{
	char str[100];
	printf("Enter string: ");
	scanf("%[^\n]s",str);
	getchar();
	char ch;
	printf("Enter character:");
	scanf("%c",&ch);

	int find = search(str,ch);
	if(find!=-1)
		printf("index of char:%d\n",find);
	else
		printf("char not found\n");
    return 0;
}
int search(char str[],char ch)
{
	int i=0;
	while(str[i]!='\0')
	{
		if(str[i]==ch)
			return i;
		i++;
	}
	return -1;
}
