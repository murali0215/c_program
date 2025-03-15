/*
 * Name : Murali Gope
* Date : 27-01-2025
*program :
2 Write a program to add two variables using their pointers.
Sample Input : 
Enter the numbers:25 30

Sample Output :
result is 55

*/

#include<stdio.h>

int main()
{
	int a,b,res;
	int *p1 = &a, *p2 = &b, *p3 = &res;
	printf("Enter the numbers:");
	scanf("%d%d",p1,p2);
	*p3 = (*p1 + *p2);
	printf("result is %d\n",res);
    return 0;
}

