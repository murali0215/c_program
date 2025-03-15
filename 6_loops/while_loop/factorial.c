#include<stdio.h>
int main(){
	long int i=1,mul=1,n;
	printf("Enter the n:");
	scanf("%ld",&n);
	while(i<=n){
		mul*=i;
		i++;
	}
	printf("Factorial of %ld is %ld\n",n,mul);
	return 0;
}
