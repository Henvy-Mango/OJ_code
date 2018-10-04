#include <stdio.h>

int main()
{
	int num, cout=0;
	scanf("%d", &num);
	int array[4] = { num,num + 1,num + 2,num + 3 };
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			for (int k = 0; k < 4; k++)
			{
				if (i != j && i != k && j != k)
				{
					cout++;
					if (cout % 6 == 0)
						printf("%d%d%d\n", array[i], array[j], array[k]);
					else
						printf("%d%d%d ", array[i], array[j], array[k]);
				}
			}
		}
	}
}