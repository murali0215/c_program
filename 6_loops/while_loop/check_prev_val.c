/*
Read n numbers from the user, and while reading every number, 
print if the number is bigger or smaller than the previous number. 
For the first number, there won't be any output as it is the first one.
Example:
Enter n number: 3
5
6
The given number is bigger than the previous number.
2
The given number is smaller than the previous number.
*/


#include<stdio.h>
int main()
{
	int a,b,n;
	printf("Enter the n:");
	scanf("%d",&n);
	printf("enter the n numbers:\n");
	scanf("%d",&a);
	while(n-1)
	{
		scanf("%d",&b);
		if ( b > a)
		{
			printf("The given number is bigger than the previous number.\n");
		}
		else
		{
			printf("The given number is smaller than the previous number.\n");
		}
		a=b;
		n--;
	}
	return 0;
}
