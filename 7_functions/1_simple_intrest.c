/*prog to calculate simple intrest using functions*/
#include<stdio.h>
float simpleintrest(int p,int t,int r)
{
	if(p<=0||t<=0||r<=0)
		return 0;
	else
	{
		float si;
		si=p*t*r/100;
		return si;
	}
}

int main()
{

	int P,T,R;
	float k;
	do
	{
		printf("Enter principal,Time in years,Rate of intrest:");
      	scanf("%d %d %d",&P,&T,&R);
      	k=simpleintrest(P,T,R);
	    if(k==0)	
		{
			   printf("\"Please enter values greater than 0\"\n");
	  	}

	}	
	while(k==0);
    
	printf("Total Amount=%0.2f\n",P+k);
    return 0;
}


