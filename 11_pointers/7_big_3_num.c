/*
 * Name : Murali Gope
* Date : 28-01-2025
*program :
7 Write a program to find the biggest of three numbers using pointers that point to those numbers.

example:-

i/p:-Enter the three numbres:88 88 88
o/p:-All are equal

Enter the three numbres:39 93 64
93 is the biggest

Enter the three numbres:67 53 20
67 is the biggest

Enter the three numbres:10 55 98
98 is the biggest

*/

#include<stdio.h>

int main()
{
	int a,b,c;
	int *p1=&a,*p2=&b,*p3=&c;
	printf("Enter the three numbres:");
	scanf("%d%d%d",p1,p2,p3);
	
	
	if(*p1>*p2 && *p1>*p3)
		printf("%d is the biggest\n",*p1);
	else if(*p2>*p1 && *p2>*p3)
		printf("%d is the biggest\n",*p2);
	else if(*p3>*p1 && *p3>*p2)
		printf("%d is the biggest\n",*p3);
	else 
		printf("All are equal\n");
	

    return 0;
}

