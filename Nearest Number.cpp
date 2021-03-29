#include <stdio.h>
int main ()
{
	int i, j, k, n, m, check, ans;
	scanf("%d %d", &k, &n);
	int digit[5];
	
	for(i=0; i<=5; i++)
		digit[i] = 0;
		
	for(i=k+1; i<32750; i++)
	{
		check = 0;
		m = 1;
		for(j=10; j<=i*10; j*=10)
		{
			digit[check] = (i%j)/m;
			m*=10;
			check++;
		}
		for(j=0; j<5; j++)
		{
			if(digit[j] == n)
			{
				printf("%d", i);
				return 0;
			}
		}
	}
	
}
