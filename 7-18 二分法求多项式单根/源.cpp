#include<math.h>
#include<stdio.h>

float a3, a2, a1, a0, A, B, mid;
float fun(float n);

int main()
{
	scanf("%f %f %f %f\n", &a3, &a2, &a1, &a0);
	scanf("%f %f", &A, &B);
	
	while (B - A >= 0.001&&fun(A)*fun(B) <= 0)
	{
		if (fun(A) == 0)
		{
			mid = A;
			break;
		}
		if (fun(B) == 0)
		{
			mid = B;
			break;
		}
		mid = (A + B) / 2;
		if (fun(mid) == 0)
			break;
		else
		{
			if ((fun(mid)*fun(A)) >= 0)
				A = mid;
			else
				B = mid;
		}
	}

	printf("%.2f", mid);
}

float fun(float n)
{
	float sum = 0;
	sum = a3 * pow(n, 3) + a2 * pow(n, 2) + a1 * n + a0;
	return sum;
}