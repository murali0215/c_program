/*enter selling price, profit and no of items:500 50 15
cost price is 30
*/

#include<stdio.h>
int main(){
int sp,cp,p,n;
printf("enter selling price, profit and no of items:");
scanf("%d%d%d",&sp,&p,&n);
cp=(sp-p)/n;
printf("cost price is %d\n",cp);
}
