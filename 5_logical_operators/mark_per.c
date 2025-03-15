#include<stdio.h>
int main(){
int a, b, c, d, e, f;
printf("Enter the subject marks:");
scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);
float percentage = (float) (a+b+c+d+e+f)/600 * 100;

if (percentage >= 80 && percentage <= 100){
 printf("Honour\n");
}
else if (percentage >= 60 && percentage <= 79){
printf("First Divison\n");
}

else if (percentage >= 50 && percentage <= 59){
printf("Second Divison\n");
}
else if (percentage >= 40 && percentage <= 49){
printf("Third Divison\n");
}
else if (percentage >= 0 && percentage <= 39){
printf("Fail");
}
return 0;
}
