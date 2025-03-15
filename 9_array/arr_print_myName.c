/*
 * Name : Murali Gope
* Date : 24-01-2025
*program :
Write the following program :
Declare a character array without size.
Initialize the array with characters of your name.
Print your name using for loop.

Sample Input : 

Sample Output :Murali Gope

*/

#include<stdio.h>

int main()
{
	char arr[]={'M','u','r','a','l','i',' ','G','o','p','e'};
	
	for(int i = 0; i < sizeof(arr); i++)
	{
		printf("%c",arr[i]);
	}
	printf("\n");

    return 0;
}

