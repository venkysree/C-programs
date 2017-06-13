#include <stdio.h>

int main()
{
	char c;
	int a,b;
	printf("enter the character\n");
	scanf("%c",&c);
	a=(c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
	b=(c=='A'||c=='E'||c=='I'||c=='O'||c=='U');
	if(a||b)
	{
		printf("%c is a Vowel\n",c);
	}
	else
	printf("%c is a Consonant\n",c);
	return 0;
}
