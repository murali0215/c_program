#include<stdio.h>
extern int stock, temp, no_purchase, total_purchase;
void Stock();

void purchase()
{
	if ( ( stock + temp ) <= 1000 )
	{
		stock += temp;
		no_purchase++;
		total_purchase += temp;
		Stock();

	}
	else
	{
		printf("Due to no stock space we can't purchase: %d\n",temp);
		printf("we can purchase:%d\n",1000-stock);
	}
}
