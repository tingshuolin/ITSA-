#include <stdio.h>
#include <math.h>

int main()
{
	int i,a[100],n = 0,total = 0;
	
	while (scanf("%d", &a[n]) == 1)
	{
    	n++;
	}
	
	for(i = 0;i < n;i++)
	{
		total += pow(a[i],3);
	}
	
	
	printf("%d",total);
	return 0;
}
