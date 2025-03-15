/*
enter the number:676
676 is a positive number

enter the number:0
0 is equal to zero

enter the number:-8765
-8765 is a negitive number
*/

#include<stdio.h>
int main(){
	int a;
	printf("enter the number:");
	scanf("%d",&a);
	if ( a > 0 ){
		printf("%d is a positive number\n",a);
	}
	else if (a ==0){
		printf("%d is equal to zero\n",a);
	} 
	else{
		printf("%d is a negitive number\n",a);
	}
	return 0;
}

