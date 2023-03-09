#include <stdio.h>
#include <stdlib.h>

int main()
{
	int x = 0;
	scanf("%i", &x);
	if ((x & 32)  == 0)
	{
		printf("%i", x);
	}
	else
	{
		x ^= 32;
		printf("%i", x);
	}






}
