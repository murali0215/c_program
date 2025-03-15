/*
 * Name : Murali Gope
* Date : 24-01-2025
*program :
13) write an compare function to take 2 arrays as input and return 1 if they are equal and 0 if they are not equal ( sizes to be sent as separate arguments)
int compare(int arr1[],int m,int arr2[],int n)

Sample Input1 : 
Enter the size of First array size:5
Enter5 elements of First array:1 2 3 4 5
Enter the size of Second array size:5
Enter5 elements of first array:1 2 3 4 5

Sample Output1 :
Given both the arrays are same

sample Input2 :
Enter the size of First array size:5
Enter5 elements of First array:1 2 3 4 5
Enter the size of Second array size:5
Enter5 elements of first array:1 2 5 6 7

sample output2 :
Given arrays are not same

 */

#include<stdio.h>
int compare(int arr1[],int m,int arr2[],int n);
int main()
{
	int m,n;
	printf("Enter the size of First array size:");
	scanf("%d",&m);
	int arr1[m];
	printf("Enter%d elements of First array:",m);
	for(int i=0; i<m;i++)
	{
		scanf("%d",&arr1[i]);
	}
	
	printf("Enter the size of Second array size:");
	scanf("%d",&n);
	int arr2[n];
	printf("Enter%d elements of first array:",n);
	for(int i=0; i<n;i++)
	{
		scanf("%d",&arr2[i]);
	}
	int result = compare(arr1,m,arr2,n);
	if(result==1)
		printf("Given both the arrays are same\n");
	else
		printf("Given arrays are not same\n");
    return 0;
}

int compare(int arr1[],int m,int arr2[],int n)
{
	if(m!=n)
	{
		return -1;
	}
	for(int i = 0; i<n ;i++)
	{
		if(arr1[i] != arr2[i])
		{
			return -1;
		}
	}
	return 1;
}
