/*
 * Name : Murali Gope
* Date : 24-01-2025
*program :
 Write a program to reverse an array and print it (Reverse the array by swapping both edges of the array and move inside and repeat till middle of the array):  

Sample Input : 
array1 ={1,2,3,4,5};

Sample Output :
array1 = {5,4,3,2,1};
*/

#include<stdio.h>

int main()
{
 	int size;
	printf("enter size:");
	scanf("%d",&size);
	int arr[size];

	printf("Enter the elements of array:");
    int j;
	for( j = 0 ;j < size ; j++)
	{
		scanf("%d",&arr[j]);
	}

	printf("Given array:");
	for(int  j = 0 ;j < size ; j++)
	{
		printf("%d ",arr[j]);
	}
	printf("\n");
	// reversing of array
	int end=size-1;
	for(int i = 0; i < size/2; i++,end--)
	{
		arr[i]=arr[i] + arr[end];
		arr[end]=arr[i]-arr[end];
		arr[i] = arr[i] - arr[end];
	}
	
	//printing array
	printf("reverse of array:");
	for(int i = 0 ; i < size; i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
    return 0;
}

