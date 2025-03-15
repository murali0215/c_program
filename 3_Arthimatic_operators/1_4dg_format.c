/*
enter 4 digit number:6532
2
3
5
6

6
5
3
2

6
65
653
6532

6532
653
65
6

2350

   6
  5
 3
2
*/
#include<stdio.h>
int main()
{
int a,b,c,d,e;
printf("enter 4 digit number:");
scanf("%d",&a);
int temp=a;

b=a%10;
a/=10;
printf("%d\n",b);

c=a%10;
a/=10;
printf("%d\n",c);

d=a%10;
a/=10;
printf("%d\n",d);

e=a;
printf("%d\n\v",e);

// b code
printf("%d\n%d\n%d\n%d\n\v",e,d,c,b);

// c code

a=temp;
printf("%d\n",a/1000);
printf("%d\n",a/100);
printf("%d\n",a/10);
printf("%d\n\v",a);

// d code

printf("%d\n",a);
printf("%d\n",a/10);
printf("%d\n",a/100);
printf("%d\n\v",a/1000);

// e code
int ti=0;
ti=a%10*10;
a/=10;

ti+=a%10;
a/=10;
ti*=10;

ti+=a%10;
a/=10;
ti*=10;
printf("%d\n\v",ti);

// f code

printf("%4d\n",e);
printf("%3d\n",d);
printf("%2d\n",c);
printf("%d\n",b);
}
