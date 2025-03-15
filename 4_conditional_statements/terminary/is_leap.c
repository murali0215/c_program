#include<stdio.h>
int main(){
int a;
printf("enter the year");
scanf("%d",&a);
 a % 4 == 0 ? a % 100 == 0? a % 400 == 0 ? printf("%d is a leap year",a):printf("%d is not a leap year",a) : printf("%d is a leap year",a) : printf("%d is not a leap year",a);
}
