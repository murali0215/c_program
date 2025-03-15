/*
 * Name : Murali Gope
* Date : 24-01-2025
*program :
Write a program to print an integer in binary format using arrays.

Sample Input : 
10
Sample Output :
1010
*/

#include<stdio.h>

int main()
{
	int number;
	printf("Enter the Decimal number:");
	scanf("%d",&number);
	int arr[number];
	int count=0;
	if(number>0)
	{

		int i=0;
		while(number)
		{	
			arr[i]=number%2;
			number=number/2;
			count++;
			i++;
		
		}
	}

	for(int i = count-1; i>=0 ;i--)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
    return 0;
}

