/*program to find the value of a to the power of n*/

#include<stdio.h>
//power function
int power(int a,int n)
{
	if(a>=0)
	{ 
		int result=1;
		while(n)
		{
			result=result*a;
			n--;
		}
		return result;
	}
	else return 0;
}
//main function
int main()
{
	int a,n,pow;
	do
	{
		printf("enter a and n values in a,n format only:");
		scanf("%d %d",&a,&n);
		pow=power(a,n);
        if(pow==0)
        {
          printf("\"enter a valve greater than 0\"\n");
        }
	}while(pow==0);

	printf("value of %d to the power of %d is:%d\n",a,n,pow);
	return 0;
}
