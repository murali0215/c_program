/*   output
Enter the date in format of dd-mm-yyyy: 12-11-2002
12/11/20028*/

#include<stdio.h>
int main(){
int d,m,y;
printf("Enter the date in format of dd-mm-yyyy: ");
scanf("%d-%d-%d",&d,&m,&y);
printf("%d/%d/%d\n",d,m,y);
}
