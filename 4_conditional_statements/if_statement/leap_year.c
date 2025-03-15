/*
Enter the year:1900
1900 is not a leap year

Enter the year2024
2024 is a leap year
*/

#include<stdio.h>
int main(){
	int a;
	printf("Enter the year:");
	scanf("%d",&a);
	if (a % 4 == 0){
		if ( a % 100 == 0){
			if ( a % 400 == 0){
				printf("%d is a leap year\n",a);
			}
			else{
				printf("%d is not a leap year\n",a);
			}
		}
		else{
			printf("%d is a leap year\n",a);
		}
	}
	else{
		printf("%d is not a leap year\n",a);
	}
	return 0;
}


