#include <stdio.h>
int main ()
{
	int i, n, x, max = 0, high = 0, like[10000];
	scanf("%d", &n);
	
	for(i=0; i<=10000; i++)
		like[i] = 0;
	
	for(i=0; i<n; i++)
	{
		scanf("%d", &x);
		if(high < x)
			high = x;
		like[x]+=1;
	}
	
	for(i=0; i<=high; i++)
	{
		if(max < like[i])
		{
			max = like[i];
		}
	}
	
	for(i=0; i<=high; i++)
	{
		if(like[i] == max)
			printf("%d ", i);
	}
}
