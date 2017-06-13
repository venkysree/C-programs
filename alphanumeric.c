#include <stdio.h>
#include <ctype.h>
int main()
{
	char a;
	printf("Enter\n");
	scanf("%c",&a);
	if (isalpha(a))
	{
    	puts("it's a letter\n");
	} 
	else if (isdigit(a))
	{
    	puts("it's a digit\n");
	}
	else
		{
    		puts("It is a symbol\n");
		}
	return 0;
}
