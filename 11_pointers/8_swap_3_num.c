/*
 * Name : Murali Gope
* Date : 28-01-2025
*program :
8 Take three input integers x,y and z. Write a program to rotate their values such that, x has the value of y, y has the value of z and z has the value of x. Do this using pointers that point to x,y and z.

example:-
Enter X:10
Enter Y:20
Enter Z:30
X:20	Y:30	Z:10

*/

#include<stdio.h>

int main()
{
	int x,y,z;
	int *p1=&x,*p2=&y,*p3=&z;
	printf("Enter X:");
	scanf("%d",p1);
	printf("Enter Y:");
	scanf("%d",p2);
	printf("Enter Z:");
	scanf("%d",p3);
	int temp=*p1;
	*p1=*p2;
	*p2=*p3;
	*p3=temp;
	printf("X:%d\tY:%d\tZ:%d\n",*p1,*p2,*p3);
    return 0;
}

