/*
 * Name : Murali Gope
* Date : 27-01-2025
*program :
3 Write a program to take input for two character variables using pointers and find out which character has higher ascii value.

Sample Input : 
Enter the character:h h
Sample Output :
Both the ascii are equal

Sample Input :
Enter the character:H z
Sample Output :
z has hiher ascii value
*/

#include<stdio.h>

int main()
{
	char a,b;
	char *p1 = &a, *p2 = &b;
	printf("Enter the character:");
	scanf("%c %c",p1,p2);
	if(*p1 == *p2)
		printf("Both the ascii are equal\n");
	else if( *p1 > *p2)
		printf("%c has higher ascii value\n",*p1);
	else 
		printf("%c has hiher ascii value\n",*p2);
    return 0;
}

