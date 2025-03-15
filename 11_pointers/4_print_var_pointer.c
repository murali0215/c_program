/*
 * Name : Murali Gope
* Date : 27-01-2025
*program :
4 Declare 3 integer variables. Declare an integer pointer. Assign the address of each variable to the pointer in succession and print the value of the variable using indirection operator on the pointer.
Sample Input : 

Sample Output :

*/

#include<stdio.h>

int main()
{
	int a,b,c;
	int *p1 = &a, *p2 = &b, *p3 = &c;
	printf("Enter the numbers:");
	scanf("%d%d%d",p1,p2,p3);
	printf("number1:%d\nnumber2:%d\nnumber3:%d\n",*p1,*p2,*p3);
    return 0;
}

