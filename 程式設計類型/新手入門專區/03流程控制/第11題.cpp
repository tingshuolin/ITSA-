#include <stdio.h>

int main()
{
	int x,i,flag = 0;
	scanf("%d",&x);
	int a[x];
	for(i =0;i<x;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i =0;i<x;i++)
	{
		if(a[i] <= 60)
		{
			if(a[i] > 37)
			{
				printf("避免外出\n");
			}
			else
			{
				printf("可依需要待在戶外\n");
			}
		}
		else
		{
			if(a[i] > 150)
			{
				printf("避免外出\n");
			}
			else
			{
				printf("可依需要待在戶外\n");
			}
		}
	}
	
	
	return 0;
}
