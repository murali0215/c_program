/*
 * Name : Murali Gope
* Date : 25-01-2025
*program :
6) int strlen( char str[]);
returns the length of the string.

Implementation:
//string length is the count of characters till the first null character is found in a string
int strlen_1(char str[])
{
int i;
for(i=0; str[i] != '\0'; i++); // count all characters till null character is found.
return i;  // return the count.
}
Sample Input : 

Sample Output :

*/
#include<stdio.h>
int my_strlen(char str[]);
int main()
{
	char str[100];
	printf("Enter string: ");
	scanf("%[^\n]s",str);
	int len = my_strlen(str);
	printf("count of string:%d\n",len);
    return 0;
}
int my_strlen(char str[])
{
	int i=0;
	while(str[i]!='\0'){
		i++;
	}
	return i;
}


