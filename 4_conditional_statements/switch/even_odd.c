#include<stdio.h>
int main(){
	int a;
	printf("enter the percentage:");
	scanf("%d",&a);
	int b = a%2==0;
	switch(b)
	{
		case 1:printf("even\n");
		       break;
		case 0:printf("odd\n");
		       break;
	}
	return 0;
} 
