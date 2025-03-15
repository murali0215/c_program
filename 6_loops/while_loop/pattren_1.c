#include<stdio.h>
int main(){
	int i=1,j=1,n;
	printf("Enter the n:");
	scanf("%d",&n);
	while(j<=n){
		if(i==1){
			printf("+1/%d",j);
		}
		else{
			printf("-1/%d",j);
		}
		i=i*-1;
		j++;
	}
	printf("\n");
	return 0;
}

