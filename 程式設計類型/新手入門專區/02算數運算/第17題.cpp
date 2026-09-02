#include <stdio.h>

int main()
{
	int hours,salary,hours61to120,hoursto121;
	double total;
	scanf("%d %d",&hours,&salary);
	
	if(hours <= 60)
	{
		total = (double)(hours * salary);
	}
	if(hours > 60 && hours <=120)
	{
		total = (double)(60 * salary);
		hours61to120 = hours - 60;
		total = total + (double)(hours61to120 * salary) * 1.33;
	}
	if(hours > 120)
	{
		total = (double)(60 * salary);
		total = total + (double)(60 * salary) * 1.33;
		hoursto121 = hours - 120;
		total = total + (double)(hoursto121 * salary) * 1.66;
	}
	printf("%.1lf",total);
	return 0;
}
