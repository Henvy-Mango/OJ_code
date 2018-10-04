#include<stdio.h>

float fact(int n);
float time(int n);

int main()
{
	float MIN,pi=1;
	scanf("%f", &MIN);
	for (int i = 1; i < 1e5; i++)
	{
		pi = pi + fact(i) / time(i);
		if ((fact(i) / time(i)) < MIN)
			break;
	}
	printf("%.6f", pi*2);
}
float fact(int n)
{
	float sum = 1;
	for (int i = 1; i <= n; i++)
		sum *= i;
	return sum;
}
float time(int n)
{
	float sum = 1;
	for (int i = 1; i <= n; i++)
		sum = sum * (2 * i + 1);
	return sum;
}