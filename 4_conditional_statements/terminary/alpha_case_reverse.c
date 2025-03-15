#include<stdio.h>
int main(){
char a;
printf("Enter the character:");
scanf("%c", &a);
a >= 97 ? a <= 122? printf("%c is a alphabet\n",a-32):printf("%c not a alphabet\n",a)  : a >= 65 ? a <= 90? printf("%c is an Alphabet\n",a+32) :printf("%c not a alphabet\n",a) :printf("%c not a alphabet\n",a);

return 0;
}
