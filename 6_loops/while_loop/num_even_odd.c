#include<stdio.h>
int main(){
	int i=1,x,n;
	printf("Enter the N number:");
	scanf("%d",&n);
	while(n<=0){
		printf("invalid input! please enter again N number:");
		getchar();
		scanf("%d",&n);
	}
	while(i<=n)
	{
		printf("Enter x value%d:",i);
		scanf("%d",&x);
		if ( x % 2 == 0){
			printf("The given number %d is EVEN\n",x);
		}
		else
		{
			printf("The given %d is ODD\n",x);
		}
		i++;
	}
	return 0;
}
