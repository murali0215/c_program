/*
 * Name : Murali Gope
* Date : 24-01-2025
*program :
5 Write the following program.
Declare an integer variable ‘size’.
Take the value of ‘size’ from user using scanf.
Declare an array of any datatype, and give the integer variable ‘size’, in place of size of the array  and initialize it to some values.(syntax: float array[size] = {1.0,2.5};)
Using for loop, try to take user input using scanf. Loop should execute ‘size’ number of times.
Using for loop, print the elements of the array

Sample Input : 
Sample Output :

*/

#include<stdio.h>

int main()
{
	int size;
	printf("enter size:");
	scanf("%d",&size);
	//int arr[size]={1,2,3,4,5,6,7,8,9,10}; //we can't intitialize variable-sized object 

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
	printf("/n");

    return 0;
}

