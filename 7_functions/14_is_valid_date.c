/*
14) Write a  function that takes a date as input, and returns 1 if the date is valid, 0 if the date is invalid
.*/

#include<stdio.h>
int is_leap(int);
int is_valid(int d, int m, int y)
{
	int leap=is_leap(y);
	if(d>31 || d<1 || m>12 || m<1 || y<1582) //the 1582 is the starting year if the gregorian calender
		return 0;
	else if(d>30 && (m==2 || m==4 || m==6 ||m==9 || m==12))
		return 0;
	else if(m==2 && leap && d>29)
		return 0;
	else if(m==2 && !leap && d>29)
		return 1;
	return 1;
}
			
int is_leap(int year)
{
	if(year%2==0 && year%100 != 0 || year%400 ==0)
	{
		return 1;
	}
	return 0;
}		
int main()
{
	int d,m,y;
	printf("enter date (dd mm yyyy): ");
	scanf("%d%d%d",&d,&m,&y);
	if(is_valid(d,m,y))
			printf("Date is valid\n");
	else
	printf("Date is invalid\n");
    return 0;
}

