/*
 * Name : Murali Gope
* Date : 25-01-2025
*program :
1). Take a string as an input, and count the number of words in the string. Take space, comma,exclamation, question mark and fullstop as delimitters for word counting.
Sample Input : 

Sample Output :

*/
#include <stdio.h>
#include <string.h>
int main()
{
	char str[100];
	printf("Enter the string: ");
	scanf("%[^\n]s", str);
	int size = strlen(str);
	int i, count = 0;
	for(i = 0; i < size; i++)
	{
		if(str[i] == '?' || str[i] == ' '|| str[i] == '.' || str[i] == '!' || str[i] == ',')
		{
			if(i != 0)
			{
				if(str[i-1] == '?' || str[i-1] == ' '|| str[i-1] == '.' || str[i-1] == '!' || str[i-1] == ',')
					continue;
				else
					count++;
			}
			else
			{
			    if((i+1 < size) && (str[i+1] == '?' || str[i+1] == ' '|| str[i+1] == '.' || str[i+1] == '!' || str[i+1] == ','))
			        continue;
			    else
			        count++;
			}
		}
	}
	if(str[i] == '\0')
	{
	    if(str[i-1] != '?' && str[i-1] != ' ' && str[i-1] != ',' && str[i-1] != '.' && str[i-1] != '!')
	        count++;
	}
	if((str[0] == '?' || str[0] == ' '|| str[0] == '.' || str[0] == '!' || str[0] == ',') && (str[1] != '?' && str[1] != ' ' && str[1] != '.' && str[1] != '!' && str[1] != ','))
	        count--;
	printf("Number of words is: %d\n", count);
}

