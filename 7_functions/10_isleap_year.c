/*
10) Write a function to accept a year as input and return 1 if the year is a leap year, otherwise 0.
 */

#include<stdio.h>
int is_leap(int year)
{
	if(year%4==0 && year%100!=0 || year%400==0)
		return 1;
	return 0;
}
int main()
{
	int year;
	printf("Enter the year:");
	scanf("%d",&year);
	if(year<=1561)
	{
		printf("enter an valid year");
	}
	else
	{
		if(is_leap(year))
				{

				printf("%d is a leap year\n",year);
				}
		else{

			printf("%d is not a leap year\n",year);
			}
	}
    return 0;
}

