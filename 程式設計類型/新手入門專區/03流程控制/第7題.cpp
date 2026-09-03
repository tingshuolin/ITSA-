#include <stdio.h>

int main()
{
	int x,i,max;
	scanf("%d",&x);
	int a[x];
	for(i = 0;i<x;i++)
	{
		scanf("%d",&a[i]);
	}
	max = a[0];
	for(i = 0;i<x;i++)
	{
		if(a[i] > max)
		{
			max = a[i];
		}
	}
	
	printf("%d",max);
	
	return 0;
}
