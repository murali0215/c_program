/*
 * Name : Murali Gope
* Date : 24-01-2025
*program :
Write an average function to return the average of marks of all students in a class. 
Sample Input : 
float average( int arr[] , int n, int s); 
arr[] contains the number of subjects.
Where 'n' is the number of students and 's' is the number of subjects. 
Sample Output :

*/

#include<stdio.h>
float average(int arr[],int, int);
int main()
{
	int n,s;
	printf("Enter no_of students:");
	scanf("%d",&n);
	printf("Enter the number of subjects:");
	scanf("%d",&s);
	int arr[n];
	float avg = average(arr,n,s);
	printf("average of marks all students in a class:%f",avg);
    return 0;
}

float average(int arr[],int n, int s)
{
	float avg;
	int ar=0;
	for(int i = 1 ; i <= n ; i++,ar++)
	{  
		int marks=0;
		for( int j = 1 ;j <= s; j++)
		{
			int temp=0;
			printf("Enter the  student %d subject %d marks: ",i,j);
			scanf("%d",&temp);
			marks+=temp;
		}
		arr[ar]=marks;
	}
	int total=0;
	for(int i = 0;i<n;i++)
	{
		total+=arr[i];
	}
	avg=total/n;
	return avg;
}

