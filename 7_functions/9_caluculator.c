/*
9) Write a calculator program with 5 functions below to do the operations of addition, subtraction, multiplication, division for quotient and division for remainder.
1) int add (int a, int b) // to be called when user chooses +
2) int sub (int a,int b) // to be called when user chooses -
3) int mul(int a, int b) // to be called when user chooses *
4) int quotient(int a, int b) // to be called when user chooses /
5) int remainder(int a,int b) // to be called when user choose%
*/

#include<stdio.h>
int Add(int num1,int num2){
	return num1+num2;
}
int Sub(int num1,int num2){
	return num1-num2;
}
int Div(int num1,int num2){
	return num1/num2;
}
int Mod(int num1,int num2){
	return num1%num2;
}
int Mul(int num1,int num2){
	return num1*num2;
}
int main(){
	char operand;
	int num1;
	int num2;
start:printf("Enter the operation to perform:");
	scanf("%d%c%d",&num1,&operand,&num2);

	switch(operand)
	{
		case '+': printf("%d + %d = %d\n",num1,num2,Add(num1,num2));
				  break;
		case '-': printf("%d - %d = %d\n",num1,num2,Sub(num1,num2));
				  break;
		case '/':if(num1==0||num2==0){
					 printf("enter non zero value\n");
					 goto start;
				 }
				 printf("%d / %d = %d\n",num1,num2,Div(num1,num2));
				 break;
		case '%':if(num1==0||num2==0){
					 printf("enter non zero value\n");
					 goto start;
				 }
				 printf("%d %% %d = %d\n",num1,num2,Mod(num1,num2));
				 break;
		case '*': printf("%d * %d = %d\n",num1,num2,Mul(num1,num2));
				  break;
		default:printf("invalid operand");
	}
	return 0;
}
