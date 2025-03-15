#include<stdio.h>
int main(){
	int a, b, c, d;
	printf("Enter 4 numbers:");
	scanf("%d %d %d %d", &a, &b, &c, &d);
	if ( a > b && a > c && a > d){
		printf("%d is the biggest\n",a);
	}
	else if ( b > a && b > c && b > d){
		printf("%d is the biggest\n",b);
	}
	else if ( c > a && c > b && c > d){
		printf("%d is the biggest\n",c);
	}
	else if ( d > a && d > c && d > b){
		printf("%d is the biggest\n",d);
	}
	else{
		printf("All are equal");
	}
	return 0;
}
