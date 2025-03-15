#include<stdio.h>
int main()
{
	int n,sum=0,b;
	printf("Enter n and n  value");
	scanf("%d",&n);
	while (n){
		scanf("%d",&b);
		sum+=b;
--n;
	}
	printf("sum of n numbers:%d",sum);
	return 0;
}
