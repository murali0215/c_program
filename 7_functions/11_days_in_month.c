/*
11) Write a function to accept a month and year as input, and return the number of days in that month as output. print the number of days in main.
 */

#include<stdio.h>
int is_leapyear(int year)
{
	if(year%4==0 && year%100!=0 || year%400==0)
		return 1;
	return 0;
}
int days(int month,int year)
{
	if(month==2 && is_leapyear(year))
		return 29;
	else if(month ==2)
		return 28;
	else if(month==4||month==6||month==9||month==11)
		return 30;
	else if(month==1 || month ==3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
		return 31;
	return -1;
}

int main()
{
	int year,month;
start:printf("Enter the month and year:");
	scanf("%d%d",&month,&year);
	
	int res=days(month,year);

	if(res!=-1)
		printf("%d days are there in an %d %d\n",res,month,year);
	else
	{
		printf("enter valid data\n");
		goto start;
	}
    return 0;
}

