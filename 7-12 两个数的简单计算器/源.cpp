#include<stdio.h>

int main()
{
	int x, y;
	char z;
	scanf("%d %c %d", &x, &z, &y);
	if (z == '+')
		printf("%d", x + y);
	else if (z == '-')
		printf("%d", x - y);
	else if (z == '*')
		printf("%d", x * y);
	else if (z == '/')
		printf("%d", x / y);
	else if (z == '%')
		printf("%d", x % y);
	else
		printf("ERROR");
}