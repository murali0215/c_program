/*  output
1234
1   
12  
123 
1234

1   
 2  
  3 
   4
*/
#include<stdio.h>
int main(){
int a;
scanf("%4d",&a);

printf("%d\b\b\b   \n",a);

printf("%d\b\b  \n",a);

printf("%d\b \n",a);

printf("%d\n",a);

printf("\n");

printf("%d\b\b\b   \n",a);

printf("%d\b\b  \r \n",a);

printf("%d\b \r  \n",a);

printf("%d\r   \n",a);

}
