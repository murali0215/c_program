/*
 * Name : Murali Gope
* Date : 25-01-2025
*program :
7) void strcpy ( char d[] . char s[]);
copies all characters from source string (char s[]) to destination string( char d[]) , upto null character ( including null character).

Implementation:

void strcpy_1( char d[], char s[])
{
int i = 0;
while( s[i] != '\0')
{
d[i] = s[i];
i++;
}
d[i] = '\0';
}

Sample Input : 

Sample Output :

*/

#include<stdio.h>

void my_strcpy(char d[],char s[]);
int main()
{
	char s[100];
	char d[100];
	printf("Enter string: ");
	scanf("%[^\n]s",s);
	my_strcpy(d,s);
	printf("destination string:%s\n",d);
    return 0;
}
void my_strcpy(char d[],char s[])
{
	int i=0;
	while(s[i]!='\0'){
		d[i]=s[i];
		i++;
	}
	d[i]='\0';
}
