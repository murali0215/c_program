int product(int a,int b)
{
	int sum=0;
	while(a)
	{
		sum=sum+b;
		a--;
	}
	return sum;
}
