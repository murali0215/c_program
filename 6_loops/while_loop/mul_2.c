#include<stdio.h>
int main(){
	int n,m,mul=0;
	printf("enter 2 number:");
	scanf("%d %d",&n,&m);
	while(n){
		mul+=m;
		n--;
	}
	printf("multiplication:%d\n",mul);
	return 0;
}
