/*

Q7. Write a function that can take an integer as input and return 1 if the number is prime number,  return 0 if it is not prime and print appropriate output message in main according to output. Return type is integer. function name IsPrime - returns int (0 or 1)

*/   

#include <stdio.h>
int IsPrime(int num)
{
	int i = 2, count = 1;
	while(i <= num/2)
	{
		if(num%i == 0)
		{
			count = 0;
			break;
		}
		i++;
	} 
	if(count == 1)
		return 1;
	else
		return 0;
}

int main()
{
	int num, Result;
	printf("Enter the number: ");
	if(scanf("%d",&num) != 0)
	{
		if(num == 0 || num == 1)
			printf("%d is neither prime not composite\n",num);
		else if(num < 0)
			printf("%d is a negative number. Cannot determine\n",num);
		else
		{
			Result = IsPrime(num);
			if(Result == 1)
				printf("Given number %d is prime\n",num);
			else if(Result == 0)
				printf("Given value %d is not prime\n",num);
		}
	}
	else
		printf("Enter valid integer data\n");
}
