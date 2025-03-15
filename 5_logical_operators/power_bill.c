#include<stdio.h>
int main(){
	int units;
	printf("Enter units:");
	scanf("%d",&units);
	if ( units >= 0 && units <=200){
		printf("%0.2f is the power bill\n",(float)100);
	}
	else if ( units >= 201 && units <= 400){
		printf("%0.2f is the power bill\n",(units-200)*0.65+100);
	}
	else if ( units >= 401 && units <= 600){
		printf("%0.2f is the power bill\n",(units-400)*0.80+230);
	}
	else if (units >=601){
		printf("%0.2f is the power bill\n",(units-600.00)+390);
	}
	return 0;
}

