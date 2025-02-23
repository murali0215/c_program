/*enter length and breath:3
5
area of rectangle is 15
perimeter of rectangle id 5
*/

#include<stdio.h>
int main(){
int l,b,a,p;
printf("enter length and breath:");
scanf("%d%d",&l,&b);
a=l*b;
p=2*(l+b);
printf("area of rectangle is %d\nperimeter of rectangle id %d\n",a,b);
return 0;
}
