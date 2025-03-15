/*
enter value:345
int i:345
*/
#include<stdio.h>
int main(){
char c,b,d;
printf("enter value:");
scanf("%c%c%c",&c,&b,&d);
int i =(c-'0')*10;
i+=(b-'0');
i*=10;
i+=(d-'0');
//int l =(i*100)+(j*10)+k;
printf("int i:%d\n",i);
}
