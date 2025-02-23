#include<stdio.h>
int main(){
int a,b,c,d,sum,avg;
printf("enter number");
scanf("%d%d%d%d",&a,&b,&c,&d);
sum=a+b+c+d;
avg=sum/4;
printf("average of %d %d %d %d is  %d",a,b,c,d,avg);
}
