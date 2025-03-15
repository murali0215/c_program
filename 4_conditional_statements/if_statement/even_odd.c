/*
enter number:77
77 is an odd number

enter number:54
54 is an even number
*/

#include<stdio.h>
int main(){
	int a;
	printf("enter number:");
	scanf("%d",&a);
	if ( a % 2 == 0 ){
		printf("%d is an even number\n",a);
	}
	else{
		printf("%d is an odd number\n",a);
	}
	return 0;
}
