#include<stdio.h>
void Stock();
void sell();
void purchase();

int stock=500;
int total_sell, no_sell;
int total_purchase, no_purchase;

int temp;

int main()
{

	int option;

	do
	{
		printf("1) Check Available stock.\n");
		printf("2) Purchase new items.\n");
		printf("3) sell the items.\n");
		printf("4) Quit.\n");	
		scanf("%d",&option);
		while(getchar()!='\n'); //Due to get char operation first value is not taking
		if(option == 1)
		{
			Stock();
		}
		else if( option == 2)
		{
			printf("Enter the no of items to purchase:");
			scanf("%d",&temp);
			purchase();
		}
		else if( option == 3)
		{
			printf("Enter the no of items to sell:");
			scanf("%d",&temp);
			sell();
		}
		else if( option == 4)
		{
			Stock();
			printf("Total purchased a stock in a day:%d\n",total_purchase);
			printf("Total no of purchases in a day:%d\n",no_purchase);
			printf("Total sell's made in a day:%d\n",total_sell);
			printf("Total no of sell's in a day:%d\n",no_sell);
			printf("\nDo you whant to Quit\nEnter Y or N:");
			char ch;
			getchar();
			scanf("%c",&ch);
		    while(getchar()!='\n');
			if(ch == 'Y'|| ch == 'y')
				break;
			else if ( ch == 'N' || ch == 'n')
				continue;
		}
		else
	
			printf("Enter the Valid operation\n");
	}while(1);
}
