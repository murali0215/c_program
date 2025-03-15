#include<stdio.h>
extern char operand;
extern int num1;
extern int num2;
int Add(){
	return num1+num2;
}
int Sub(){
	return num1-num2;
}
int Div(){
	return num1/num2;
}
int Mod(){
	return num1%num2;
}
int Mul(){
	return num1*num2;
}
