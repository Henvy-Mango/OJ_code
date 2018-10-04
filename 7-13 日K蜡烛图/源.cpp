#include<stdio.h>

int main()
{
	float Open, High, Low, Close;
	scanf("%f %f %f %f", &Open, &High, &Low, &Close);
	if (Close < Open)
		printf("BW-Solid");
	else if (Close > Open)
		printf("R-Hollow");
	else
		printf("R-Cross");
	if ((High > Open&&High > Close) && (Low < Open&&Low < Close))
	{
		printf(" with Lower Shadow and Upper Shadow");
	}
	else
	{
		if (Low < Open&&Low < Close)
			printf(" with Lower Shadow");
		if (High > Open&&High > Close)
			printf(" with Upper Shadow");
	}
}