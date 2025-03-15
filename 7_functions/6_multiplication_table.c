/*
Q6. Write a function that takes an integer number as input and prints its multiplication table.return type is  void.
*/   


#include <stdio.h> 
void mul(int num);
int main()
{
	int num;
	printf("Enter the number: ");
	scanf("%d", &num);
	mul(num);
}

void mul(int num)
{
	int i, prod;
	i = 1; prod = 1;
	while(i <= 10)
	{
		prod = num * i;
		printf("%d x %d = %d\n", num, i++, prod);
	}
	return;
}

