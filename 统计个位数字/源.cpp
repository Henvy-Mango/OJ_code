#include <stdio.h>

int Count_Digit(const int N, const int D);

int main()
{
	int N, D;

	scanf("%d %d", &N, &D);
	printf("%d\n", Count_Digit(N, D));
	return 0;
}
int Count_Digit(const int N, const int D)
{
	int m = N;
	int yu;
	int i=0;
	int sum = 0;
	int num[10] = { 0 };
	if (m == 0)sum++;
	while (m != 0)
	{
		yu = m % 10;
		if (yu < 0)
			yu = -yu;
		num[i] = yu;
		m = m / 10;
		if (num[i] == D)
			sum++;
		i++;
	}
	return sum;
}