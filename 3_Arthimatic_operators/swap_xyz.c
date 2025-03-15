/*
enter x y z12 13 14
x:13 y:14 z:12*/
#include<stdio.h>
int main(){
int x,y,z,temp;
printf("enter x y z");
scanf("%d %d %d",&x,&y,&z);
temp=x;
x=y;
y=z;
z=temp;
printf("x:%d y:%d z:%d",x,y,z);
}
