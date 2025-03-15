/*
 * Name : Murali Gope
* Date : 28-01-2025
*program :
9 Declare an integer array of size 10 and initialize it to some values. Print the addresses of each element of the array using a pointer. using indirection operator , print the value stored in each element of the array.
Sample Input : 

Sample Output :

*/

#include<stdio.h>

int main()
{
	int arr[10]={10,35,56,22,55,77,98,23,26,63};
	//printf("Enter 10 array elements:");
	int *p=arr;
	
	for(int i=0;i<10;i++)
	{
		printf("addres:%p\tvalue of index%d is %d\n",p,i,*p);
		p++;
	}


	return 0;
}

