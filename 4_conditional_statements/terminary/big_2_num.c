#include<stdio.h>
int main(){
int a,b;
printf("Enter 2 numbers:");
scanf("%d %d", &a, &b);
b > a ? printf("%d is biggest among\n",b) : printf("%d is the biggest among\n",a);
return 0;
}

