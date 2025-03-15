/*
 * Name : Murali Gope
* Date : 24-01-2025
*program :
6 Write a function to search for a specific element given by the user, in an array and display its index.  Function takes array and element to search as inputs, and returns the index as output. If element not found, return -1.
Sample Input : 
Sample Output :

*/

#include<stdio.h>
int search(int arr[],int size, int find)
{
	
	for( int i=0 ; i < size ; i++)
	 {
		 
		if(arr[i] == find)
		{
			return i;
		}
		
	}	
	return -1;
}


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

	printf("Elements in arr:");
	for(int i = 0; i < size; i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
	int find;
	printf("Enter element to search:");
	scanf("%d",&find);
	printf("index:%d\n",search(arr,size,find));

    return 0;
}

