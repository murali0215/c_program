/*Enter the operation:5%2
5 % 2 = 1
Enter the operation:5*2
5 * 2 = 10
Enter the operation:5/2
5 / 2 = 2
Enter the operation:2-3
2 - 3 = -1
Enter the operation:2+3
2 + 3 = 5
*/
#include<stdio.h>
char operand;
int num1;
int num2;
extern int res;

void operation();

int main(){

	printf("Enter the operation:");
	scanf("%d%c%d",&num1,&operand,&num2);

	operation();
	printf("result of %d %c %d is %d",num1,operand,num2,res);
	return 0;
}
