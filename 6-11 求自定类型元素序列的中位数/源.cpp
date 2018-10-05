#include <stdio.h>

#define MAXN 10
typedef float ElementType;

ElementType Median(ElementType A[], int N);

int main()
{
	ElementType A[MAXN];
	int N, i;

	scanf("%d", &N);
	for (i = 0; i < N; i++)
		scanf("%f", &A[i]);
	printf("%.2f\n", Median(A, N));

	return 0;
}
//ElementType Median(ElementType A[], int N)
//{
//	ElementType t;
//	//Ã°ÅÝÅÅÐò
//	for (int i = 0; i < N - 1; i++)
//	{
//		for (int j = 0; j < N - i - 1; j++)
//		{
//			if (A[j] > A[j + 1])
//			{
//				t = A[j + 1];
//				A[j + 1] = A[j];
//				A[j] = t;
//			}
//		}
//	}
//	return A[N / 2 ];
//}
ElementType Median(ElementType A[], int N)
{
	int i, j, Increment;
	ElementType Tmp;
55221122	//Ï£¶ûÅÅÐò
	for (Increment = N / 2; Increment > 0; Increment /= 2) {
		for (i = Increment; i < N; i++) {
			Tmp = A[i];
			for (j = i; j >= Increment; j -= Increment) {
				if (Tmp < A[j - Increment])
					A[j] = A[j - Increment];
				else
					break;
			}
			A[j] = Tmp;
		}
	}
	return A[N / 2];
}
