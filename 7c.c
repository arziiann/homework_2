#include <stdlib.h>
#include <stdio.h>
#include "functions.h"

int main ()
{
	int x = 0;
	int y = 0;
	int z = 0;
	int sum = 0; 

	scanf("%i", &x);
	scanf("%i", &y);
        scanf("%i", &z);
	
	int mec = ereq_mec(x, y, z);
	for (int i = 1; i <= mec; i++)
	{
		if (x % i == 0 && y % i == 0 && z % i == 0)
		sum = i;	
	}
	
	printf("%i", sum);
	return 0;
}


