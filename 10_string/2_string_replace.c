/*
 * Name : Murali Gope
* Date : 25-01-2025
*program :
2). Write a program to replace a given character by another character in a string.  WAP to display the word expansion of a number
eg., Input String : "789"
Output : Seven Eight Nine"
Sample Input : 

Sample Output :

*/

#include<stdio.h>
#include<string.h>

int main()
{


	char str[100];
	printf("Enter string");
	scanf("%[^\n]s",str);
	int n =strlen(str);
	for(int i=0; i<n;i++)
	{

		
		switch(str[i])
		{
			case '1':printf("One ");
					 break;
			case '2':printf("Two ");
					 break;
			case '3':printf("Three ");
					 break;
			case '4':printf("Four ");
					 break;

			case '5':printf("Five  ");
					 break;
			case '6':printf("Six ");
					 break;
			case '7':printf("Seven ");
					 break;
			case '8':printf("Eight ");
					 break;
			case '9':printf("Nine ");				 
					 break;
			case '0':printf("Zero ");
					 break;
		}
	}
		
    return 0;
}

