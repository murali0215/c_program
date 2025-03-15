/*
 * Name : Murali Gope
* Date : 24-01-2025
*program :
1 Write the following program :
Declare an integer array of size 100.
Assign numbers 1-100 to each element of the array.
Print all the numbers.
Print all even elements.
Print all odd elements.
Add also 5 to each element and print 6 – 105 numbers.
Sample Input : 
Sample Output :

*/

#include<stdio.h>

int main()
{
	int arr[100];
	int j=1,i;
	for( i = 0; i < 100 ; i++, j++)
	{
		arr[i]=j;
	}

	printf("Elemets of array:");
	for( i = 0; i < 100 ; i++)
	{
		printf("%d ",arr[i]);
	}

	printf("\nEven Element:");
	for( i = 0; i < 100 ; i++)
	{
		if( arr[i] % 2 == 0)
			printf("%d ",arr[i]);
	}

	printf("\nOdd Elements:"); 
	for( i = 0; i < 100 ; i++)
	{
		if( arr[i] % 2 != 0)
			printf("%d ", arr[i]);
	}

	printf("\nAfter adding 5:");
	for( i = 0; i < 100 ; i++)
	{
		arr[i] += 5;
		if((arr[i] >= 6) && arr[i] <= 105)
			printf("%d ",arr[i]);
	}
	printf("\n");
    return 0;
}

