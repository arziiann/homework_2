#include <stdlib.h>
#include <stdio.h>
#include "functions.h" 

int main ()
{

	int x = 0;
	int y = 0;
	int z = 0;
	int h = 0;
		
	scanf("%i", &x);
	scanf("%i", &y);
	scanf("%i", &z);
	scanf("%i", &h);
	
	if( x + y + z + h == 0)
	{
		printf("%i", chors_poqr(x, y, z, h));
	}
	else
	{	
		printf("noric");
	}
	return 0;
}
