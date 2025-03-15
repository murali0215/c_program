/*
enter number:65
magnitude of number is 65

enter number:-76
magnitude of number is 76
*/

#include<stdio.h>
int main(){
	int a;
	printf("enter number:");
	scanf("%d",&a);
	if ( a > 0 ){
		printf("magnitude of number is %d\n",a);
	}
	else{
		printf("magnitude of number is %d\n",a*-1);
	}
	return 0;
}
