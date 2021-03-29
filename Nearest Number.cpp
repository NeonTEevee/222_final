#include <stdio.h>
int main ()
{
	int i, j, k, n, m, check, ans;
	scanf("%d %d", &k, &n);
	int digit[5];
	
	j = 1;
	check = 0;
	for(i=10; i<=k*10; i*=10)
	{
		digit[check] = (k%i)/j;
		j*=10;
		check++;
		printf("Digit[%d] = %d\n", check, digit[check-1]);
	}
	
	digit[0]++;
	m = 1;
	for(i=k+1; i<32750; i++)
	{
		for(j=10; j<=i*10; j*=10)
		{
			digit[check] = (i%j)/m;
			m*=10;
			check++;
		}
		for(j=0; j<5; j++)
		{
			if(digit[j] = n)
			{
				printf("%d", i);
				return 0;
			}
		}
	}
	
}
