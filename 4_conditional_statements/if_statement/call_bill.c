/*
enter no of calls:103
bill:253.75

enter no of calls:100
bill:250.00

enter no of calls:67
bill:167.50
*/

#include<stdio.h>
int main(){
	int call;
	printf("enter no of calls:");
	scanf("%d",&call);
	float extra_bill, bill=250;
	if (100 <  call){
		extra_bill = ( call - 100 );
		bill = extra_bill + bill;
		printf("bill:%0.2f\n",bill);
	}
	else{
		bill = call *2.5;
		printf("bill:%0.2f\n",bill);
	}
	return 0;
} 
