#include<stdio.h>
int main(){
int a;
printf("Enter the number:");
scanf("%d",&a);
a >= 0 ? printf("magnitude: %d\n",a) : printf("magnitude: %d\n",-a);
return 0;
}
