#include<stdio.h>

int main()
{
	int a, b, sum = 0, i, c;
	scanf("%d %d", &a, &b);
	for (i = 0; i <= b - a; i++)
	{
		if ((i % 5 == 0) && (i != 0))
			printf("\n");
		c = a + i;
		printf("%5d", c);
		sum += c;
	}
	printf("\n");
	printf("Sum = %d", sum);
}