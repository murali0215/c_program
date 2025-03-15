/*
Enter 2 numbers and operator:10 + 2
10 + 2 = 12

Enter 2 numbers and operator:10 - 2
10 - 2 = 8

Enter 2 numbers and operator:10 * 2
10 * 2 = 20

Enter 2 numbers and operator:10 / 2
10 / 2 = 5

Enter 2 numbers and operator:10 % 2
10 % 2 = 0

Enter 2 numbers and operator:10 @ 2
enter valid operator
*/


#include<stdio.h>
int main (){
	int a,b,res;
	char c;
	printf("Enter 2 numbers and operator:");
	scanf("%d %c %d", &a, &c, &b);
	if ( c == '+'){
		res = a + b;
		printf("%d + %d = %d\n",a,b,res);
	}
	else if ( c == '-'){
		res = a - b;
		printf("%d - %d = %d\n",a,b,res);
	}
	else if ( c == '*'){
		res = a * b;
		printf("%d * %d = %d\n",a,b,res);
	}
	else if ( c == '/'){
		res = a / b;
		printf("%d / %d = %d\n",a,b,res);
	}
	else if ( c == '%'){
		res = a % b;
		printf("%d %% %d = %d\n",a,b,res);
	}
	else{
		printf("enter valid operator\n");
	}
	return 0;
}

