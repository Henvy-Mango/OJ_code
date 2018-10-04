#include<stdio.h>
//整道题实际上是把16进制的数转换成10进制输出
int main()
{
	int num, s, k;
	scanf("%d", &num);
	s = num % 16;
	k = num / 16 * 10;
	printf("%d", s + k);
}