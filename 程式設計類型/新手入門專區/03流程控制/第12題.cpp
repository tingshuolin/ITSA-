#include <stdio.h>

int main()
{
	int x,i;
	scanf("%d",&x);
	int a[x];
	for(i =0;i<x;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i =0;i<x;i++)
	{
		if(a[i] >= 90 && a[i] <= 100)
		{
			printf("纔单\n");
		}
		else if(a[i] >= 80 && a[i] <= 89)
		{
			printf("ヒ单\n");
		}
		else if(a[i] >= 70 && a[i] <= 79)
		{
			printf("单\n");
		}
		else if(a[i] >= 60 && a[i] <= 69)
		{
			printf("单\n");
		}
		else
		{
			printf("ぃの\n");
		}
	}
	
	
	return 0;
}
