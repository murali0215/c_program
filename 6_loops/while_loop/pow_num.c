#include<stdio.h>
int main()
{
	int a,b,pow=1,temp;
	printf("Enter numbers:");
	scanf("%d %d",&a,&b);
	temp=b;
	while(b)
	{
		pow=pow*a;
		b--;
	}
	printf("%dto the power of %d -> %d\n",a,temp,pow);
	return 0;
}
