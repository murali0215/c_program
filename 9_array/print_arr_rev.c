/*
 * Name : Murali Gope
* Date : 24-01-2025
*program :
write a program to print an array in reverse order.

Sample Input : 
size of array:6
12 23 43 99 77 0
Sample Output :
0 77 99 43 23 12 
*/

#include<stdio.h>

int main()
{
	int size;
	printf("enter size:");
	scanf("%d",&size);
	int arr[size];
    int j;
	for( j = 0 ;j < size ; j++)
	{
		scanf("%d",&arr[j]);
	}

	printf("reverse of arr:");
	for(int i = size-1; i >= 0; i--)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");

    return 0;
}

