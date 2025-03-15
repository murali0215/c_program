#include<stdio.h>
int main(){
	int sum=0,i=1,n;
	printf("Enter the number:");
	scanf("%d",&n);
	while(i<=n){
		sum+=i;
		++i;
	}
	printf("sum:%d\n",sum);
	return 0;
}
