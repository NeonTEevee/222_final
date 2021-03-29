#include <stdio.h>
int main ()
{
	int i, j, k, n, check, ans;
	scanf("%d %d", &k, &n);
	int digit[5];
	
	j = 1;
	check = 0;
	for(i=10; i<=k*10; i*=10)
	{
		digit[check] = (k%i)/j;
		j*=10;
		check++;
	}
	
	for(i=k; i<check; i++)
	{
		
	}
	
}
