/*
 * Name : Murali Gope
* Date : 24-01-2025
*program :
4 Try experimenting with the below array syntaxes and see the results,check their sizes, try to also read values for elements and print them:</br>
int arr[5] = {};
int arr[10] = {2,4,5.6,7.3};
int arr[3] = {1,2,3,4,5};
int arr[0] = {};
int arr[0] = {1,2,3,4,5};
int arr[] = {};
int arr[‘a’];

Sample Input : 
Sample Output :
Elements of int arr[5] = {}:0 0 0 0 0 
Elements of int arr[10] = {2,4,5,6,7.3}:2 4 5 6 7 3 0 0 0 0
         for 3rd 
experiment_arr_syntax.c: In function ‘main’:
experiment_arr_syntax.c:53:23: warning: excess elements in array initializer
  int arr3[3] = {1,2,3,4,5};
                       ^
experiment_arr_syntax.c:53:23: note: (near initialization for ‘arr3’)
experiment_arr_syntax.c:53:25: warning: excess elements in array initializer
  int arr3[3] = {1,2,3,4,5};
                         ^
experiment_arr_syntax.c:53:25: note: (near initialization for ‘arr3’)

        for 4th
Elements of int arr[0] = {}:32766 1985321472 1549231861 1437206304 21979 -1115644793 32751 0 32 393678280   garbage values

		for 5th

*/

#include<stdio.h>

int main()
{

	// for int arr[5] = {};
	int arr1[5] = {};
	printf("Elements of int arr[5] = {}:");
	for(int i = 0 ; i < 5 ; i++)
	{
		printf("%d ",arr1[i]);
	}
	printf("\n");
	

	
	//for int arr[10] = {2,4,5.6,7.3};

	int arr2[10] = {2,4,5,6,7,3};

	printf("\n Elements of int arr[10] = {2,4,5,6,7.3}:");
	for(int i = 0 ; i < 10 ; i++)
	{
		printf("%d ",arr2[i]);
	}
	printf("\n");
	

	
	// for int arr[3] = {1,2,3,4,5};

	int arr3[3] = {1,2,3,4,5};
	printf("\n Elements of int arr[3] = {1,2,3,4,5}:");
	for(int i = 0 ; i < 10 ; i++)
	{
		printf("%d ",arr3[i]);
	}

	
	// for int arr[0] = {};
	int arr4[0] = {};
	printf("\n Elements of int arr[0] = {}:");
	for(int i = 0 ; i < 10 ; i++)
	{
		printf("%d ",arr4[i]);
	}

	//for int arr[0] = {1,2,3,4,5};
	int arr5[0]={1,2,3,4,5};
	printf("\n Elements of int arr[0] = {1,2,3,4,5}:");
	for(int i = 0 ; i < 10 ; i++)
	{
		printf("%d ",arr5[i]);
	}

	

	//for int arr[] = {};
	int arr[] = {};
 	printf("%d",arr[1]);

	//for int arr[‘a’];
//	int arr[‘a’];
	
    return 0;
}

