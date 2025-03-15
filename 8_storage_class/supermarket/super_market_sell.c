#include<stdio.h>

extern int stock, temp, no_sell ,total_sell;

void Stock();

void sell()
{
	if( temp <= stock)
	{
		stock-=temp;
		no_sell++;
		total_sell += temp;
		Stock();
	}
	else
	{
		printf("Due to no enough stock we can't make sell: %d\n",temp);
		printf("we can sell: %d\n",stock);
	}
}
