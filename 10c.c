#include <stdio.h>
#include <stdlib.h>

int main()
{
	char x = 0;
	char y = 0;
	scanf("%c %c", &x, &y);
	if(x == y + 32 && y == x - 32)
	{
		printf("chisht e");
	}

	else if( y == x + 32 && x == y - 32)
	{
		printf("chisht e");
	}

	else
	{
		printf("zuyg chen");
	}
	 
	return 0;	
}
