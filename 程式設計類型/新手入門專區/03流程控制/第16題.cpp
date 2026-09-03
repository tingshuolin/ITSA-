#include <stdio.h>
#include <math.h>
int main()
{
	int a,b,c,d,arm;
	scanf("%d",&a);
	arm = a;
	b = a / 100;
	a = a - b * 100;
	c = a / 10;
	a = a - c * 10;
	d = a;
	if(pow(b,3) + pow(c,3) + pow(d,3) == arm)
	{
		printf("YES");
	}
	else
	{
		printf("NO");
	}
	return 0;
}
