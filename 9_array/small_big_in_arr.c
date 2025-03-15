/*
 * Name : Murali Gope
* Date : 24-01-2025
*program :
Declare an array of size 10. Enter 10 elements and save them in the array. Print the array . Find out the biggest and smallest numbers and their indexes and print.

Sample Input : 
43 54 45 23 57 23 57 23 9 10

Sample Output : 
Big Element:57  index:4
Small Element:9  index:8

*/

#include<stdio.h>

int main()
{
	int arr[10];
	int i, small_index,big_index;

	// scaning the input
	for( i = 0; i < 10 ; i++)
	{
		scanf("%d",&arr[i]);
	}

	small_index = 0 ,big_index = 0;

	// for finding small and big element
	for( i = 1 ; i < 10; i++)
	{
		if(arr[small_index] > arr[i])
		{
			
			
			small_index = i;
		}
		if(arr[big_index] < arr[i])
			big_index = i;
	}

	//printing index and Big element
    printf("Big Element:%d  index:%d\n",arr[big_index], big_index);

	//printing index & small element
	printf("Small Element:%d  index:%d", arr[small_index],small_index);

	return 0;
}

