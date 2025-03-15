/*
 * Name : Murali Gope
* Date : 26-01-2025
*program :
8) void strcat( char d[] , char s[]);
concatenates the content from source string to the end of destination string ( copy paste characters from s to  d , from null character index in d )
eg., char d[] = "Kernel";
char s[] = "Masters";

output: after concatenation d[] becomes " KernelMasters";

*/

#include<stdio.h>
int my_strlen(char str[]);
void my_strcat(char d[],char s[]);
int main()
{
	char s[100];
	char d[100];
	printf("Enter string1: ");
	scanf("%[^\n]s",d);
	getchar();
	printf("Enter string2: ");
	scanf("%[^\n]s",s);
	my_strcat(d,s);
	//printf("source:%s\n",s);
	printf("destination string:%s\n",d);
    return 0;
}
void my_strcat(char d[],char s[])
{
	int i=0;
	int n = my_strlen(d);
	while(s[i]!='\0')
	{
		//printf("d1:%c\t d2:%c\n",d[n-1],d[n]);
		d[n]=s[i];
		//printf("\nd:%c\t",d[n]);
		i++;
		n++;
	}
	d[n]='\0';
	//printf("\n");
}

int my_strlen(char str[])
{
	int i=0;
	while(str[i]!='\0'){
		i++;
	}
	return i;
}

