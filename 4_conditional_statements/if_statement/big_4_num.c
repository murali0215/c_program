/*
Enter the 4 numbers:745 75 45 89
745 is the biggest of given numbers

Enter the 4 numbers:87 985  5 54
985 is the biggest of given numbers

Enter the 4 numbers:12 23 43 34
43 is the biggest of given numbers

Enter the 4 numbers:10 20 30 40
40 is the biggest of given numbers

Enter the 4 numbers:10 10 10 10
All numbers are equal
*/

#include<stdio.h>
int main(){
	int a, b, c, d;
	printf("Enter the 4 numbers:");
	scanf("%d %d %d %d", &a, &b, &c, &d);
	if ( a > b ){
		if ( a > c ){
			if ( a > d ){
				printf("%d is the biggest of given numbers\n",a);
			}
		}
	}
	else if ( b > c ){
		if ( b > d ){
			if ( b > a ){
				printf("%d is the biggest of given numbers\n",b);
			}
		}
	}
	else if ( c > d ){
		if ( c > a ){
			if ( c > b ){
				printf("%d is the biggest of given numbers\n",c);
			}
		}
	}
	else if ( d > a ){
		if ( d > b ){
			if ( d  > c ){
				printf("%d is the biggest of given numbers\n",d);
			}
		}
	}
	else{
		printf("All numbers are equal\n");
	}
	return 0;
}
