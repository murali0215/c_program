/*    output
enter a and b values:2 3
value of a:3
value of b:2
*/

#include<stdio.h>
int main(){
int a,b,c;
printf("enter a and b values:");
scanf("%d %d",&a,&b);
c=a;
a=b;
b=c;
printf("value of a:%d\nvalue of b:%d\n",a,b);
}
