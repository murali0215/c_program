#include<stdio.h>
int main(){
char ch;
printf("Enter the character:");
scanf("%c",&ch);
if ( ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch== 'O' || ch=='U'){
printf("%c is a Vowel\n",ch);
}
else{
printf("not a vowel\n");
}
return 0;
}

