#include <stdio.h>

void parz_bard_tver(int x)
{
	int count = 0;
	for(int i = 1;  i <= x; i ++ )
	{
		if(x % i == 0)
		{
			count ++;
		}
	}
		
	if(count <= 2)
	{
		printf("parz e");
	}

	else
	{
		printf("bard e");
	}

}





int ereq_mec(int x, int y, int z)
{
	if(x > y && x > z)
	{
		return x;
	}	
	else if (y > x && y > z)
	{
		return y;
	}
	else if (z > x && z >y)
	{
	 	return z;
	}

	else if (x == y || y == z)
	{
		return x;
	}
	else if (y == x || y == x )
	{
		return y;
	}
	else
	{
		return z;
	}
}


int chors_poqr (int x, int y, int z, int h )
{
	if (x == 0 && y == 0 && z == 0 && h == 0 )
	{
		 printf("bolory 0 en");
	}

	else if (x < y && x < z && x < h )
	{
		return x;
	}
	
	else if (y < x && y < z && y < h)	
	{
		return y;
	}
	
	else if (z < x && z < y && z < h)
	{
		return z;
	}
	return -1;
}

int ereq_poqr (int x, int y, int z)
{
	if (x < y && x < z)
	{
		return x;
	}
	
	else if (y < x && y < z)
	{
		return z;
	}
	
	else 
	{
		return z;
	}
	return 0;
}





 	

