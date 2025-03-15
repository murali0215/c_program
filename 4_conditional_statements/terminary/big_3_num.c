#include<stdio.h>
int main(){
int a, b, c;
printf("Enter 3 Number:");
scanf("%d %d %d", &a, &b, &c);
int temp = a > b ? a > c ? a : c : b > c ? b : c;
printf("%d is the biggest of the given number",temp);

return 0;
}
