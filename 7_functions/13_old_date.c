/*
13) Write a function that takes 2 dates as inputs, and returns 1 if the first date is old, 2 if the second date is old.
 
*/

#include<stdio.h>
int is_old(int d1,int m1, int y1,int d2,int m2, int y2)
{
	if(y1<y2)
		return 1;
	if(y1==y2)
	{
		if(m1<m2)
		{
			return 1;
		}
		else if(m1==m2)
		{
			if(d1<d2)
			{
				return 1;
			}
			return 0;
		}
		return 0;
	}
	return 0;
}


int main()
{
	int d1,m1,y1,d2,m2,y2;
	printf("Enter first person date of birth (dd mm yyyy): ");
	scanf("%d %d %d",&d1,&m1,&y1);
	printf("Enter second petson date of birth (dd mm yyyy): ");
	scanf("%d %d %d",&d2,&m2,&y2);
	if(is_old(d1,m1,y1,d2,m2,y2))
		printf("First person of DOB: %d %d %d is old\n",d1,m1,y1);
	else
		printf("second person of DOB %d %d %d is old\n",d2,m2,y2);

    return 0;
}

