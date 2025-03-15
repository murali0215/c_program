#include<stdio.h>
int main(){
	int a, b, c;
	printf("Enter the 3 numbers");
	scanf("%d %d %d", &a, &b,&c);
	if ( a > b && a > c){
		printf("%d is the biggest\n",a);
	}
	else if ( b > c && b > a){

		printf("%d is the biggest\n",b);
	}
	else if ( c > b && c > a){
		printf("%d is the biggest\n",c);
	}
	else {
		printf("All are equal\n");
	}
	return 0;
}
