#include<stdio.h>

int main()
{
	int now, flow;
	int hour, minute;
	int i;
	scanf("%d %d", &now, &flow);
	hour = now / 100;
	minute = now % 100;
	minute += flow % 60;
	hour += flow / 60;
	if (minute >= 60)
	{
		minute -= 60;
		hour++;
	}
	else if(minute<0)
	{
		minute += 60;
		hour -= 1;
	}
	if (minute == 0)
		printf("%d%d%d", hour, minute, minute);
	else
		printf("%d%d", hour, minute);
}