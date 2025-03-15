#include<stdio.h>
extern char operand;
extern int num1;
extern int num2;
int res;
void operation()
{
	switch(operand)
	{
		case '+': res=num1+num2;
			  break;
		case '-': res=num1-num2;
			  break;
		case '/': res=num1/num2;
			  break;
		case '%': res=num1%num2;
			  break;
		case '*': res=num1*num2;
			  break;
	}
}

