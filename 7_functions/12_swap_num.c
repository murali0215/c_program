/*
12) Write a function ,that can take two integers, swap their values and print their new values. return type should be void. function should print the values.

*/

#include<stdio.h>
void swap(int num1, int num2)
{
	num1=num1+num2;
	num2=num1-num2;
	num1=num1-num2;
	printf("number1 after swap=%d\nnumber2 after swap=%d\n",num1,num2);
}
int main()
{
	int num1,num2;
	printf("Enter number1:");
	scanf("%d",&num1);
	printf("Enter number2:");
	scanf("%d",&num2);
	swap(num1,num2);
    return 0;
}

