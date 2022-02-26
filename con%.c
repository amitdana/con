#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define SIZE 81

void contract (char s1[], char s2[])
{
	int count=0, s=0, i=0;
	int indexS2=0;
	char low;

	while (s<strlen(s1))
	{
		low=s1[s];
		i=s;
		while (s1[i+1] - s1[i] == 1)
		{
			  count++;
			  i++;
		}
		if (count >1)
		{
			s2[indexS2] = low;
			s2[indexS2+1] = '-';
			s2[indexS2+2] = s1[i];
			indexS2+=2;
			s=s+count;
			
		}
		else {s2[indexS2]=low;}
		count=0;
		i=0;
		s++;
		indexS2++;
	}
}
int main ()
{
	char s[SIZE], result[SIZE];
	printf("please enter your string. the MAX length sring is 80 characters\n");
	fgets(s, SIZE,stdin);
	contract(s,result);

	printf("the string is:%s-> %s\n",s,result);
	return 0;
}
	
	
