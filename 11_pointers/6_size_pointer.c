/*
 * Name : Murali Gope
* Date : 27-01-2025
*program :
6 declare different pointers with different data types. Print the sizes of the pointer variables using sizeof operator. Why do u think all of them are giving same size irrespective of the data type ?

Sample Input : 

Sample Output :

*/

#include<stdio.h>

int main()
{
	int *p;
	char *p;
	float *p;
	printf("size of int: %lu",sizeof(p1));
	printf("size of char: %lu",sizeof(p2));
	printf("size of :%lu",sizeof(p3));
    return 0;
}

