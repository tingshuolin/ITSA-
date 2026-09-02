#include <stdio.h>

int main()
{
	int n,max,flag = 0,b=0;
	scanf("%d",&n);
	int a[n];
	for(int i =0;i<n;i++)
	{
		a[i] = 0;
	}
	for(int i = 2;i<n;i++)
	{
		a[i-2] = i;
		for(int j = 2; j<i;j++)
		{
			if(i % j == 0)
			{
				a[i-2] = 0;
				break;
			}	
		}
	}
	max = a[0];
	for(int i =0; i<n;i++)
	{
		if(a[i] > max)
		{
			max = a[i];
		}
	}
	printf("%d",max);
	
	return 0;
}

		

