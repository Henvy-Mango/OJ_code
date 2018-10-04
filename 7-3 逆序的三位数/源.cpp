#include<stdio.h>
int main()
{
	int num;
	int set[3] = { 0 };
	scanf("%d", &num);
	for (int i = 0; i < 3; i++)
	{
		set[i] = num % 10;
		num = num / 10;
	}
	if (set[0] == 0 && set[1] == 0)
		printf("%d", set[2]);
	else if (set[0] == 0 && set[1] != 0)
		printf("%d%d", set[1], set[2]);
	else
		printf("%d%d%d", set[0], set[1], set[2]);
}