#include<stdio.h>
//������ʵ�����ǰ�16���Ƶ���ת����10�������
int main()
{
	int num, s, k;
	scanf("%d", &num);
	s = num % 16;
	k = num / 16 * 10;
	printf("%d", s + k);
}