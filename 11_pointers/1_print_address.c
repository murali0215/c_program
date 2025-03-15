/*
 * Name : Murali Gope
* Date : 27-01-2025
*program :
1 Write a program to print the address of a variable , its value ,its size, try different executions and note the address printed. Assign the address of the variable to a pointer variable.Print the size of pointer and its indirected value (apply * operator).

Sample Output :
address of x:0x7ffd585a075c
value of x:50
size of x:4
size of p:8
indirect value:50


address of x:0x7ffe6a58355c
value of x:50
size of x:4
size of p:8
indirect value:50
w 
*/

#include<stdio.h>

int main()
{
	int x=50;
	printf("address of x:%p\n",&x);
	printf("value of x:%d\n",x); 
	printf("size of x:%lu\n",sizeof(x));
	
	int *p=&x; //Assign the address of the variable to a pointer variable
	printf("size of p:%lu\n",sizeof(p)); //Print the size of pointer
	printf("indirect value:%d\n",*p); //indirected value (apply * operator).

    return 0;
}

