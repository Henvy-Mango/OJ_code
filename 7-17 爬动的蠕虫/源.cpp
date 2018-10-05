#include<stdio.h>

int main()
{
	int N, U, D, S = 0, i;
	scanf("%d %d %d", &N, &U, &D);
	for (i = 1; i < 1e5; i++)
	{
		if (i % 2 == 0)
			S -= D;
		else
		{
			S += U;
			if (S >= N)
				break;
		}
	}
	printf("%d", i);
}
