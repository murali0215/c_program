/*
 * Name : Murali Gope
* Date : 27-01-2025
*program :
5 Declare 3 pointer variables of integer type, and an integer variable. Assign the address of integer variable to the 3 pointers. Print the variable value using indirection on each pointer variable. Change the variable value directly and check the values of each of the pointers using indirection. Change the variable value , using each pointer and print the variable value and indirected values of all pointers every time you change.

default number1:18
default number2:87
default number3:98
Enter the number1 to modify:87
number1:87
Enter the number2 to modify:98
number2:98
Enter the number3 to modify:23
number3:23

*/
#include<stdio.h>

int main()
{
	int a=18, b = 87, c =98;
	printf("default number1:%d\ndefault number2:%d\ndefault number3:%d\n",a,b,c);
	int *p1 = &a, *p2 = &b, *p3 = &c;
	printf("Enter the number1 to modify:");
	scanf("%d",p1);
	printf("number1:%d\n",*p1);
	printf("Enter the number2 to modify:");
	scanf("%d",p2);
	printf("number2:%d\n",*p2);
	printf("Enter the number3 to modify:");
	scanf("%d",p3);
	printf("number3:%d\n",*p3);
    return 0;
}
