#include<stdio.h>
int main()
{
	int i=1, topper=0, s1, s2 , s3, s4, s5, s6, n;
	float percentage;
	printf("Enter n student:");
	scanf("%d",&n);
	while (i<=n)
	{
		printf("Enter %d student 6 subjects marks:\n",i);
		scanf("%d %d %d %d %d %d", &s1, &s2, &s3, &s4, &s5, &s6);
		percentage = (float) (s1+s2+s3+s4+s5+s6)/6;
		printf("Student %d percentage is %0.2f%%\n",i,percentage);
		if( topper < percentage)
		{
			topper = i;
		}
		i++;
	}
	printf("Topper sudent ID is %d\n",topper);
	return 0;
} 
