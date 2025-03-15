/*
 * Name : Murali Gope
* Date : 25-01-2025
*program :

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
	int i=0;
	while(str[i]!='\0')
	{
		i++;
	}
	printf("count of string:%d\n",i);
    return 0;
}


