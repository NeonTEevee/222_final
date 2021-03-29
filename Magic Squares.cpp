#include <stdio.h>
int main ()
{
	int i, j, x, y, z;
	scanf("%d %d %d", &x, &y, &z);
	int a[x][x], b[y][y], c[z][z];
	
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
}
