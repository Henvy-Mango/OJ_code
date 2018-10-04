#include<stdio.h>

int main()
{
	float f1, f2;
	char c1;
	int n1;
	scanf("%f %d %c %f", &f1, &n1, &c1, &f2);
	printf("%c %d %.2f %.2f", c1, n1, f1, f2);
}