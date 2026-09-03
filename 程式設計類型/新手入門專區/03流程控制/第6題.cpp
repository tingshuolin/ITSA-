#include <stdio.h>

int main()
{
	int x,i;
	scanf("%d",&x);
	int a[x] = {0};
	for(i = 0;i<x;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i = 0;i<x;i++)
	{
		if(a[i] >= 50 && a[i] <=70)
		{
			printf("%d\n",a[i]);
		}
		else
		{
			printf("100\n");
		}
	}
	
	return 0;
}
