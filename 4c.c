#include <stdlib.h>
#include <stdio.h>
#include "functions.h"
int main()
{
	int x=0;
	int y=0;
	int z=0;
	scanf("%i", &x);
	scanf("%i", &y);
	scanf("%i", &z);
	
	if(x == y || x == z || z == y)
	{
		printf("%i", ereq_mec(x, y, z));
	}
	

}
