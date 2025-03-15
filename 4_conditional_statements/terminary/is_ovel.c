#include<stdio.h>
int main(){
char ch;
printf("Enter character");
scanf("%c",&ch);
/*if ( ch=='a' || ch  == 'e' || ch == 'i' || ch =='o' || ch =='u' ||ch =='A' || ch == 'E' || ch == 'I' || ch =='O' || ch =='U'){
printf("%c is a ovel\n",ch);
}
else{
printf("%c is not a ovel\n",ch);
}*/

ch=='a'?printf("It is vowel\n"):ch=='e'?printf("It is vowel\n"):ch=='i'?printf("It is vowel\n"):ch=='o'?printf("It is vowel\n"):ch=='u'?printf("It is vowel\n"):ch=='A'?printf("It is vowel\n"):ch=='E'?printf("It is vowel\n"):ch=='I'?printf("It is vowel\n"):ch=='O'?printf("It is vowel\n"):ch=='U'?printf("It is vowel\n"):printf("It is not vowel\n");
return 0;
}
