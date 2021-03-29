#include <stdio.h>
int main ()
{
	int i, j, x, y, z, n, m, check, sum[400], num;
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
	
	n = 0;							//A
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
			num = sum[n];
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
		for(j=0; j<x; j++)
		{
			sum[n]+=a[i][j];
		}
		n++;
	}
	for(j=0; j<x; j++)
	{
		for(i=0; i<x; i++)
		{
			sum[n]+=a[i][j];
		}
		n++;
	}
	
	for(i=0; i<n; i++)
	{
		if(sum[i] != num)
			check = 0;
	}
	if(check == 0) {
		printf("no\n");
	} else {
		printf("yes\n");
	}
	
	n = 0;							//B
	check = 1;
	for(i=0; i<y; i++)
	{
		if(i == 0)
		{
			j = 0;
			while(i<y)
			{
				sum[n]+=b[i][j];
				i++;
				j++;
			}
			i = 0;
			j--;
			num = sum[n];
			n++;
			while(j>=0)
			{
				sum[n]+=b[i][j];
				i++;
				j--;
			}
			j = 0;
			n++;
		}
		for(j=0; j<y; j++)
		{
			sum[n]+=b[i][j];
		}
		n++;
	}
	for(j=0; j<y; j++)
	{
		for(i=0; i<y; i++)
		{
			sum[n]+=b[i][j];
		}
		n++;
	}
	
	for(i=0; i<n; i++)
	{
		if(sum[i] != num)
			check = 0;
	}
	if(check == 0) {
		printf("no\n");
	} else {
		printf("yes\n");
	}
	
	n = 0;							//C
	check = 1;
	for(i=0; i<z; i++)
	{
		if(i == 0)
		{
			j = 0;
			while(i<z)
			{
				sum[n]+=c[i][j];
				i++;
				j++;
			}
			i = 0;
			j--;
			num = sum[n];
			n++;
			while(j>=0)
			{
				sum[n]+=c[i][j];
				i++;
				j--;
			}
			j = 0;
			n++;
		}
		for(j=0; j<z; j++)
		{
			sum[n]+=c[i][j];
		}
		n++;
	}
	for(j=0; j<z; j++)
	{
		for(i=0; i<z; i++)
		{
			sum[n]+=c[i][j];
		}
		n++;
	}
	
	for(i=0; i<n; i++)
	{
		if(sum[i] != num)
			check = 0;
	}
	if(check == 0) {
		printf("no\n");
	} else {
		printf("yes\n");
	}
}
