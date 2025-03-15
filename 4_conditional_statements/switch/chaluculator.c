#include<stdio.h>
int main(){
	char op;
	int n1,n2;
	printf("Enter the number operator other number: ");
	scanf("%d%c%d",&n1,&op,&n2);
	switch (op)
	{
		case '+':printf("Result:%d\n",n1+n2);
			 break;
		case '-':printf("Result:%d\n",n1-n2);
			 break;
		case '/':printf("Result:%d\n",n1/n2);
			 break;
		case '*':printf("Result:%d\n",n1*n2);
			 break;
		case '%':printf("Result:%d\n",n1%n2);
			 break;
		default:
			 printf("Enter the valid operator");
	}
	return 0;
}
