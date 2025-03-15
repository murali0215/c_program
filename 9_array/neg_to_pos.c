/*
 * Name : Murali Gope
* Date : 24-01-2025
*program :
Write an neg_to_pos function to modify the array such that all negative numbers are converted to positive.

Sample Input : 
Enter the size:10 
Enter array element:12 -21 23 43 54 564 -456 -45 6 -45 -54 

Sample Output :
array elements after modification:12 21 23 43 54 564 456 45 6 45 

*/

#include<stdio.h>
void neg_to_pos(int arr[],int);
int main()
{
	int size;
	printf("Enter the size:");
	scanf("%d",&size);
	int arr[size];
	printf("Enter array element:");
	for(int i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	neg_to_pos(arr,size);
	printf("array elements after modification:");
	for(int i =0 ; i<size;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
    return 0;
}

void neg_to_pos(int arr[], int size)
{
	for(int i=0; i<size; i++)
	{
		if(arr[i]<0)
		{
			arr[i]=-1*arr[i];
		}
	}
}
