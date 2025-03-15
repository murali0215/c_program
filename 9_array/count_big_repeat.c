/*
 * Name : Murali Gope
* Date : 24-01-2025
*program :
14) write a function to take an array as input, and count how many times the biggest number is repeated in that array, and return the count.

Sample Input : 
eg., array : {10, 14,16,10, 10 , 16, 14, 14, 16, 16};

Sample Output :
output : biggest number is repeated 4 times

*/

#include<stdio.h>

int main()
{
	int size, count=0, big=0;
	printf("Enter the size of array: ");
	scanf("%d",&size);
	printf("Enter %d elements of array:",size);
	int arr[size];

	if(size>0)
	{
		scanf("%d",&arr[0]);
		big = arr[0];
	}

	for(int i=1; i<size ; i++)
	{
		scanf("%d",&arr[i]);
		if(arr[i]>big)
			big=arr[i];
	}
	for(int i=0 ; i<size ; i++)
	{
		if(big==arr[i])
			count++;
	}
	printf("Biggest number %d is repeated %d times\n",big,count);
	
    return 0;
}

