#include<stdio.h>
int main(){
int p,n;
float r,si,m;
printf("please enter principle time in monts and rate of intrest:");
scanf("%d%d%f",&p,&n,&r);
m=n/12.0;
si=p*m*r/100;
printf("value of simple intrest is:%f\n",si); 
return 0;
}

