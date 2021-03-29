#include <stdio.h>
int main ()
{
	int i, n, x, max = 0, like[10000];
	scanf("%d", &n);
	
	for(i=0; i<=10000; i++)
		like[i] = 0;
	
	for(i=0; i<n; i++)
	{
		scanf("%d", &x);
		like[x]+=1;
		printf("Like[%d] = %d\n", x, like[x]);
	}
	
	for(i=0; i<=10000; i++)
	{
		if(max < like[i])
		{
			max = like[i];
			printf("Max = %d = %d\n", like[i], max);
		}
	}
	
	for(i=0; i<=10000; i++)
	{
		if(like[i] == max)
			printf("%d ", i);
	}
}
