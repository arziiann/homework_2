#include <stdio.h>
#include <stdlib.h>
int main()
{
	int x=0;
	int y=0;
	scanf("%i",&x);
	scanf("%i",&y);
	if(x == 0 &&  y == 0)
	{
		printf("tvery 0 en");

	}
	else if(x > y)
	{
		printf("%i", x);
	}
	else
	{
		printf("%i", y);
	}

}
