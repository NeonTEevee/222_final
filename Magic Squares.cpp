#include <stdio.h>
int main ()
{
	int i, j, x, y, z, n, check, sum[400], max = 0;
	scanf("%d %d %d", &x, &y, &z);
	int a[x][x], b[y][y], c[z][z];
	
	for(i=0; i<=400; i++)
		sum[i] = 0;
	
	for(i=0; i<x; i++)
	{
		for(j=0; j<x; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	for(i=0; i<y; i++)
	{
		for(j=0; j<y; j++)
		{
			scanf("%d", &b[i][j]);
		}
	}
	for(i=0; i<z; i++)
	{
		for(j=0; j<z; j++)
		{
			scanf("%d", &c[i][j]);
		}
	}
	
	n = 0;
	check = 1;
	for(i=0; i<x; i++)
	{
		if(i == 0)
		{
			j = 0;
			while(i<x)
			{
				sum[n]+=a[i][j];
				i++;
				j++;
			}
			i = 0;
			j--;
			n++;
			while(j>=0)
			{
				sum[n]+=a[i][j];
				i++;
				j--;
			}
			j = 0;
			n++;
		}
		
	}
}
