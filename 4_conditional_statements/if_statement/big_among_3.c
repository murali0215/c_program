/*
enter  3 numbers:30 10 3
30 is biggest of the given numbers

enter  3 numbers:10 20 9
20 is biggest of the given numbers

enter  3 numbers:89 98 200
200 is biggest of the given numbers

enter  3 numbers:20 20 20
all 3 numbers are equal
*/

#include<stdio.h>
int main () {
	int a, b, c;
	printf ("enter  3 numbers:");
	scanf("%d %d %d", &a, &b, &c);
	if ( a > b ){
		if ( a > c ) {
			printf("%d is biggest of the given numbers\n",a);
		}
	}
	else if ( b > c ){
		if ( b > a ) {
			printf("%d is biggest of the given numbers\n",b);
		}
	}
	else if ( c > a ){
		if ( c > b ) {
			printf("%d is biggest of the given numbers\n",c);
		}
	}
	else{
		printf("all 3 numbers are equal\n");
	}
	return 0;
}
