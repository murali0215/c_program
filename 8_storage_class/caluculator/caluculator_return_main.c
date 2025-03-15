/*Enter the operation:5%2
5 % 2 = 1
Enter the operation:5*2
5 * 2 = 10
Enter the operation:5/2
5 / 2 = 2
Enter the operation:2-3
2 - 3 = -1
Enter the operation:2+3
2 + 3 = 5
*/
#include<stdio.h>
int Add();
int Sub();
int Div();
int Mod();
int Mul();

char operand;
int num1;
int num2;

int main(){

	printf("Enter the operation:");
	scanf("%d%c%d",&num1,&operand,&num2);

	switch(operand)
	{
		case '+': printf("%d + %d = %d\n",num1,num2,Add());
			  break;
		case '-': printf("%d - %d = %d\n",num1,num2,Sub());
			  break;
		case '/': printf("%d / %d = %d\n",num1,num2,Div());
			  break;
		case '%': printf("%d %% %d = %d\n",num1,num2,Mod());
			  break;
		case '*': printf("%d * %d = %d\n",num1,num2,Mul());
			  break;
		default:printf("invalid operand");
	}
	return 0;
}
