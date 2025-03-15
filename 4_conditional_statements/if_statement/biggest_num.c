/*
enter two numbers:3 5
5 is the biggest number of given numbers
*/
#include<stdio.h>
int main(){
	int a,b;
	printf("enter two numbers:");
	scanf("%d %d",&a,&b);
	if ( a < b ){
		printf("%d is the biggest number of given numbers\n",b);
	}
	else{
		printf("%d is the biggest number of given numbers\n",a);
	}
	return 0;
} 
