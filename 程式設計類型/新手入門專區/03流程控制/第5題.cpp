#include <stdio.h>

int main()
{
	int a,total;
	scanf("%d",&a);
	if(a >= 10)
	{
		total = a * 100 * 0.9;
	}
	if(a >= 30 && a < 100)
	{
		total = a * 100 * 0.8;	
	}
	if(a > 100)
	{
		total = a * 100 * 0.7;
	}
	printf("%d",total);
	return 0;
}
