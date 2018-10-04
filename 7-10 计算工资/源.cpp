#include<stdio.h>

int main()
{
	int year, hour;
	int money;
	float sum;
	scanf("%d %d", &year, &hour);
	if (year >= 5)
		money = 50;
	else
		money = 30;
	if (hour >= 40)
		sum = (hour - 40)*1.5*money + 40 * money;
	else
		sum = hour * money;
	printf("%.2f", sum);
}