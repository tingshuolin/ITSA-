#include <stdio.h>

int main()
{
	int seconds,minutes,hours,days;
	scanf("%d",&seconds);
	days = seconds / 60 / 60 / 24;
	hours = seconds / 60 / 60 - (days * 24);
	minutes = seconds / 60 - (hours * 60) -(days * 24 * 60);
	seconds = seconds - (minutes * 60) - (hours * 60 * 60) - (days * 24 * 60 * 60);
	printf("%d days\n",days);
	printf("%d hours\n",hours);
	printf("%d minutes\n",minutes);
	printf("%d seconds\n",seconds);
	return 0;
}
