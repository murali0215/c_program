#include<stdio.h>
int main(){
char a;
printf("Enter the character:");
scanf("%c",&a);
if (a >= 65 && a <= 90 || a >= 97 && a <= 122){
printf("is Alphabet");
}
else{
printf("Not Alphabet");
}
return 0;
}
