/*
 * Name : Murali Gope
* Date : 24-01-2025

*program :
Write a program to swap two arrays in reverse order.

Sample Input : 
array1 = {1,2,3,4,5};
array2 = {6,7,8,9,10};

Sample Output :
array1 : {10,9,8,7,6}
array2: { 5,4,3,2,1}

*/

#include<stdio.h>

int main()
{
	int size;
	printf("Enter the size arrays:");
	scanf("%d",&size);

	int arr1[size];
	int arr2[size];
	printf("Enter the first array elemets:");
	for(int i = 0; i < size; i++)
	{
		scanf("%d",&arr1[i]);
	}
	printf("Enter the second array elemets:");
	for(int i = 0; i < size; i++)
	{
		scanf("%d",&arr2[i]);
	}
/*	printf("Given first array:");
	for(int j = 0 ;j < size ; j++)
	{
		printf("%d ",arr1[j]);
	}

	printf("\ngiven second array:");

	for(int j = 0 ;j < size ; j++)
	{
		printf("%d ",arr2[j]);
	}
*/

	for(int i = 0,j = size-1; i<j/2;i++)
	{
		int temp=arr1[i];
		arr1[i]=arr1[j-i];
		arr1[j-i]=temp;

	}
	for(int i = 0,j = size-1; i<j/2;i++)
	{
		int temp=arr2[i];
		arr2[i]=arr2[j-i];
		arr2[j-i]=temp;
	}
	for(int i = 0; i<size;i++)
	{
		int temp = arr1[i];
		arr1[i]=arr2[i];
		arr2[i]=temp;
	}

	printf("\nafter swap first array:");
	for(int i =0;i<size;i++)
	{
		printf("%d ",arr1[i]);
	}
	
	printf("\nsecond swap first array:");
	for(int i =0;i<size;i++)
	{
		printf("%d ",arr2[i]);
	}
    return 0;
}

